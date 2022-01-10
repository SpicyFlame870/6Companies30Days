class Solution{
public:	
	
	ull getNthUglyNo(int n) {
	    
	    ull dp[n];
	    
	    ull t1 = 0,t2 = 0,t3 = 0;
	    
	    dp[0] = 1;
	    
	    for(int i=1;i<n;i++){
	        
	        dp[i] = min({2*dp[t1],3*dp[t2],5*dp[t3]});
	        
	        if(dp[i] == 2*dp[t1]){
	            t1++;
	        }
	        if(dp[i] == 3*dp[t2]){
	            t2++;
	        }
	        if(dp[i] == 5*dp[t3]){
	            t3++;
	        }
	        
	        
	    }
	    
	    return dp[n-1];
	}
};