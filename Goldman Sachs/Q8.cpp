#define mod 1000000007
class Solution {
	public:
	    int solve(string s,int i,int n,int dp[]){
	        
	        if(i==n){
	            return 1;
	        }
	        if(s[i]=='0'){
	            return 0;
	        }
	        
	        if(dp[i]!=-1){
	            return dp[i];
	        }
	        
	        if(i!=n-1){
	            
	            int y = (s[i]-48)*10 + s[i+1] - 48;
	            
	            if(y<27){
	                return dp[i] = (solve(s,i+1,n,dp) + solve(s,i+2,n,dp))%mod;
	            }
	            else return dp[i] = solve(s,i+1,n,dp);
	        }
	       
	        
	        return dp[i] = 1;
	        
	        
	    }
		int CountWays(string str){
		    
		    int i = 0;
		    int dp[str.length()];
		    
		    memset(dp,-1,sizeof(dp));
		    
		    return solve(str,i,str.length(),dp);
		}

};