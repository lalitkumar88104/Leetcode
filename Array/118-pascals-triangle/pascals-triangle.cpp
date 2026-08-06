class Solution {
public:
    // helper fun;
    vector<int> genraterow(int row) {
        vector<int> temp;
        long long ans = 1;
        temp.emplace_back(ans);
        for (int col = 1; col < row; ++col) {
            ans = ans * (row - col);
            ans = ans / col;
            temp.emplace_back(ans);
        }
        return temp;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; ++i) {
            ans.emplace_back(genraterow(i));
        }
        return ans;
    }
};