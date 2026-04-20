class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size(), l = 0, r = n - 1;
        while(l <= r){
            int mid = (l + r) / 2, row = 0;
            for(int i = 1; i < m; i++){
                if(mat[i][mid] > mat[row][mid]) row = i;
            }
            if((mid == 0 || mat[row][mid] > mat[row][mid - 1]) &&
               (mid == n - 1 || mat[row][mid] > mat[row][mid + 1]))
                return {row, mid};
            if(mid < n - 1 && mat[row][mid] < mat[row][mid + 1]) l = mid + 1;
            else r = mid - 1;
        }
        return {-1, -1};
    }
};