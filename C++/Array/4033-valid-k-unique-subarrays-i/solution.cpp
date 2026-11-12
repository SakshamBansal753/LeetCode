// Fenwick Tree (Binary Indexed Tree) for 0-based index querying
class BIT {
    vector<int> tree;
    int n;
public:
    BIT(int n) : n(n) { 
        tree.assign(n + 1, 0); 
    }
    
    void add(int i, int delta) {
        for (++i; i <= n; i += i & -i) {
            tree[i] += delta;
        }
    }
    
    int query(int i) {
        int sum = 0;
        for (++i; i > 0; i -= i & -i) {
            sum += tree[i];
        }
        return sum;
    }
    
    int query(int l, int r) {
        return query(r) - query(l - 1);
    }
};

struct Query {
    int l, r, id;
    // Sort queries by their right endpoint for offline Fenwick processing
    bool operator<(const Query& other) const {
        return r < other.r;
    }
};  class Solution {
public:
    vector<bool> validSubarrays(vector<int>& nums, int k, vector<vector<int>>& queries) {
int n = nums.size();
        int q = queries.size();
        vector<bool> ans(q);

        // 1. Zobrist Hashing Setup
        mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
        unordered_map<int, uint64_t> zobrist_hash;
        vector<uint64_t> prefXOR(n + 1, 0);
        
        for (int i = 0; i < n; i++) {
            if (zobrist_hash.find(nums[i]) == zobrist_hash.end()) {
                zobrist_hash[nums[i]] = rng(); // Assign random 64-bit integer
            }
            prefXOR[i + 1] = prefXOR[i] ^ zobrist_hash[nums[i]];
        }

        // 2. Prepare Offline Queries
        vector<Query> Q(q);
        for (int i = 0; i < q; i++) {
            Q[i] = {queries[i][0], queries[i][1], i};
        }
        sort(Q.begin(), Q.end());

        // 3. Process Array and Answer Queries
        BIT bit(n);
        unordered_map<int, int> last_seen;
        int q_idx = 0;

        for (int i = 0; i < n; i++) {
            // If we've seen this number before, remove its previous occurrence from the BIT
            if (last_seen.find(nums[i]) != last_seen.end()) {
                bit.add(last_seen[nums[i]], -1);
            }
            
            // Register its new latest occurrence
            bit.add(i, 1);
            last_seen[nums[i]] = i;

            // Process all queries whose right endpoint ends exactly at index 'i'
            while (q_idx < q && Q[q_idx].r == i) {
                int L = Q[q_idx].l;
                int R = Q[q_idx].r;
                int id = Q[q_idx].id;

                // Condition 1: Are all frequencies even? (XOR sum == 0)
                uint64_t subarray_xor = prefXOR[R + 1] ^ prefXOR[L];
                
                if (subarray_xor == 0) {
                    // Condition 2: Are there exactly k distinct elements?
                    int distinct_count = bit.query(L, R);
                    ans[id] = (distinct_count == k);
                } else {
                    ans[id] = false;
                }
                
                q_idx++;
            }
        }

        return ans;
    }
};