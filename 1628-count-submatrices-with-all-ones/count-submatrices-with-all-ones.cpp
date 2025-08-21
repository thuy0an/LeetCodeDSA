class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> height(n, 0);
        int res = 0;
        for(int i =0; i < m ; i++){
            for(int j=0; j <n; j++)
                if( mat[i][j] == 0)
                    height[j]=0;
                else 
                    height[j]+=1;
            for( int j=0; j< n; j++){
                int minH = height[j];
                for(int k=j; k>=0; k--){
                    minH= min(minH, height[k]);
                    if( minH ==0) break;
                    res +=minH;
                }
            }
        }

        return res;
    }
};