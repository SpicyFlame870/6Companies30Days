class Solution {
public:
    int solve(vector<int> &arr,int i,int j,int dp[][501]){
        
        if(i==j){
            return arr[i];
        }
        
        if(i==j-1){
            return max(arr[i],arr[j]);
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int a = arr[i] + min(solve(arr,i+2,j,dp),solve(arr,i+1,j-1,dp));
        int b = arr[j] + min(solve(arr,i+1,j-1,dp),solve(arr,i,j-2,dp));
        
        return dp[i][j] = max(a,b);
        
        
    }
    int maxCoins(vector<int>&arr,int n)
    {
	    int dp[501][501];
	    
	    memset(dp,-1,sizeof(dp));
	    
	    return solve(arr,0,n-1,dp);
    }
};