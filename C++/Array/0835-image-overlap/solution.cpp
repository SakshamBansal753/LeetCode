class Solution {
public:

    vector<pair<int,int>> non_zero(vector<vector<int>>& img) {
        vector<pair<int,int>> result;

        for (int i = 0; i < img.size(); i++) {
            for (int j = 0; j < img.size(); j++) {
                if (img[i][j] == 1) {
                    result.push_back({i, j});
                }
            }
        }

        return result;
    }

    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<pair<int,int>> a = non_zero(img1);
        vector<pair<int,int>> b = non_zero(img2);
        map<pair<int,int>, int> mp;
        int maxi = 0;

        for (auto p1 : a) {
            for (auto p2 : b) {

                int dx = p2.first - p1.first;
                int dy = p2.second - p1.second;

                mp[{dx, dy}]++;

                maxi = max(maxi, mp[{dx, dy}]);
            }
        }

        return maxi;
    }
};

