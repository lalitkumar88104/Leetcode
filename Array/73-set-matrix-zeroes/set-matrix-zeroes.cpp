class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int col0 = 1;

        //identify which row and colum contains 0 and store it in 0th colum and row;

        for(int i = 0 ; i<row ; i++){
            for(int j = 0; j<col ; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    if( j != 0){
                        matrix[0][j] = 0;
                    }
                    else{
                        col0 = 0;
                    }
                }
            }
        }

        // after identifying use that data to update matrix except 0th row and column;

        for(int i = 1 ; i<row ; i++){
            for(int j = 1 ; j<col ; j++){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        // update 0 th row ;

        if(matrix[0][0] == 0){
            for(int j = 0 ; j<col ; ++j){
                matrix[0][j] = 0;
            }
        }
        // update 0 th column
        if(col0 == 0){
            for(int i = 0 ; i<row ; ++i){
                matrix[i][0] = 0;
            }
        }
    }
};