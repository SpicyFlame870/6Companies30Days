class Solution{
    public:
    long long dp[1001][1001];
    long long int mod=1e9+7;
    long long solve(int n,int x,int p){
        
        
        if(n==0){
            return 1;
        }
        if(n<0 or p>n){
            return 0;
        }
        
        if(dp[n][p]!=-1){
            return dp[n][p];
        }
        
        long long pr = (long long)pow(p,x);
        
        
        
        if(pr<=n)
        return dp[n][p] = (solve(n,x,p+1) + solve(n-pr,x,p+1))%mod;
        
            
        return dp[n][p] = 0;
        
        
    }
    int numOfWays(int n, int x)
    {
        
        memset(dp,-1,sizeof(dp));
        
        
        return solve(n,x,1);
    }
};