class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n), indices(n);
        iota(indices.begin(), indices.end(), 0); // Fill with 0, 1, 2, ..., n-1

        mergeSort(nums, indices, result, 0, n - 1);
        return result;
    }

    void mergeSort(vector<int>& nums, vector<int>& indices, vector<int>& result, int left, int right) {
        if (left >= right) return;

        int mid = (left + right) / 2;
        mergeSort(nums, indices, result, left, mid);
        mergeSort(nums, indices, result, mid + 1, right);

        vector<int> temp;
        int i = left, j = mid + 1, rightCounter = 0;

        while (i <= mid && j <= right) {
            if (nums[indices[j]] < nums[indices[i]]) {
                temp.push_back(indices[j++]);
                rightCounter++;
            } else {
                result[indices[i]] += rightCounter;
                temp.push_back(indices[i++]);
            }
        }

        while (i <= mid) {
            result[indices[i]] += rightCounter;
            temp.push_back(indices[i++]);
        }

        while (j <= right) {
            temp.push_back(indices[j++]);
        }

        for (int k = left; k <= right; k++) {
            indices[k] = temp[k - left];
        }
    }
};
