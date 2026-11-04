///week09-1 1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size();
        int ans = 0;
        ///method 1 ¬d¹ï¨¤½u
        for (int i=0; i<N; i++){//left up to right down
            ans += mat[i][i];
        }
        for (int i=0; i<N; i++){//left down to right up
            ans += mat[N-1-i][i];
        }
        if (N%2==1) ans-= mat[N/2][N/2];
        return ans;
    }
};
