class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {
            vector<int> temp;
            long long res = 1;
            temp.push_back(res);
            for (int j = 1; j < i ; j++) {
                res = res * (i - j);
                res = res / j;
                temp.push_back(res);
            }
            ans.emplace_back(temp);
        }
        return ans;
    }
};