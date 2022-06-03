class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> xCheck(matrix.size());
        vector<int> yCheck(matrix[0].size());
        for(int i = 0; i < matrix.size(); ++i){
            for(int j = 0; j < matrix[0].size(); ++j){
                if (matrix[i][j] == 0) {
                    xCheck[i] = 1;
                    yCheck[j] = 1;
                }
            }
        }
        for(int i = 0; i < matrix.size(); ++i){
            for(int j = 0; j < matrix[0].size(); ++j){
                if (xCheck[i] == 1) {
                    matrix[i][j] = 0;
                }
                if (yCheck[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};