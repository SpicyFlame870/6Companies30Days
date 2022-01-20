class Solution{
public:
    string solve(int i,int j,vector<vector<int>> br){
        
        if(i==j){
            
            string s = "";
            return s + char('A'+i-1);
        }
        
        int k = br[i][j];
        
        return '(' + solve(i,k,br) + solve(k+1,j,br) + ')';
        
    }
    string matrixChainOrder(int p[], int n){
        
        int dp[n][n];
        vector<vector<int>> br(n,vector<int>(n,0));
        
        
        memset(dp,0,sizeof(dp));
        
        for(int l=2;l<n;l++){
            
            int c = l,r = 1;
            
            while(c<n){
                
                dp[r][c] = INT_MAX;
                for(int k=r;k<c;k++){
                    
                    if( dp[r][c] > dp[r][k] + dp[k+1][c] + p[r-1]*p[k]*p[c] ){
                        
                        dp[r][c] = dp[r][k] + dp[k+1][c] + p[r-1]*p[k]*p[c];
                        
                        br[r][c] = k;
                        
                    }
                    
                }
                
                r++;
                c++;
            }
            
        }
        
   
        return solve(1,n-1,br);
        
    }
};