class Solution {
public:
    int check(int x, vector<int>& tops, vector<int>& bottoms) {
        int rotations_a = 0; // Rotate tops to x
        int rotations_b = 0; // Rotate bottoms to x

        for (int i = 0; i < tops.size(); ++i) {
            if (tops[i] != x && bottoms[i] != x) {
                return INT_MAX; // Impossible
            } else if (tops[i] != x) {
                rotations_a++;
            } else if (bottoms[i] != x) {
                rotations_b++;
            }
        }

        return min(rotations_a, rotations_b);
    }

    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int rotations = min(check(tops[0], tops, bottoms),
                            check(bottoms[0], tops, bottoms));
        return rotations == INT_MAX ? -1 : rotations;
    }
};
