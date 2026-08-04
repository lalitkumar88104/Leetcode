class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int column = matrix[0].size();
        int left = 0 , right = column-1;
        int top = 0 , bottom = row-1;

        // traversing in spiral order :
        while(left <= right  && top <= bottom){
            // right
            for(int i = left ; i<= right ; i++){
                ans.emplace_back(matrix[top][i]);
            }
            top++;
            // down
            for(int i = top ; i<= bottom ; i++){
                ans.emplace_back(matrix[i][right]);
            }
            right--;
            // left
            if(top <= bottom){
                for(int i = right ; i>= left ; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            // up
            if(left<= right){
                for(int i = bottom ; i>= top ; --i){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans; 
    }
};