class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        bool firstRow = false, firstCol = false;

        // Step 1: Check first column
        for(int i = 0; i < n; i++){
            if(matrix[i][0] == 0) {
                firstCol = true;
                break;
            }
        }

        // Step 2: Check first row
        for(int j = 0; j < m; j++){
            if(matrix[0][j] == 0) {
                firstRow = true;
                break;
            }
        }

        // Step 3: Mark rows & columns
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 4: Fill inner matrix
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 5: Handle first row
        if(firstRow){
            for(int j = 0; j < m; j++){
                matrix[0][j] = 0;
            }
        }

        
        if(firstCol){
            for(int i = 0; i < n; i++){
                matrix[i][0] = 0;
            }
        }
    }
};