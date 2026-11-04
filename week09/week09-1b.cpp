///week09-1 1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size();
        int ans = 0;
        ///method 2 ¨â¼h°j°é
        for (int i=0; i<N; i++){
            for (int j=0; j<N; j++){
                if (i==j || i+j==N-1) ans+= mat[i][j];
            }
        }
        return ans;
    }
};
