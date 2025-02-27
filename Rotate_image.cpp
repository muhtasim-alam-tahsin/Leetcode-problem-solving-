Approach : 1. Find the transpose matrix.
           2. Swap columns.


class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int m=matrix.size(),n=matrix[0].size();
            for(int i=0;i<n;i++){
                for(int j=i+1;j<m;j++){
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }for(int i=0;i<n;i++){
                for(int j=0;j<n/2;j++){
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[i][n-j-1];
                    matrix[i][n-j-1] = temp;
                }
            }
        }
    };
