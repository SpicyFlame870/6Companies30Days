class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    
	    
	    int sum = 0;
	    
	    for(int i=0;i<n;i++){
	        sum += arr[i];
	    }
	    
	    int dp[n+1][sum+1];
	    
	    for(int i=0;i<=sum;i++){
	        dp[0][i] = 0;
	    }
	    for(int i=0;i<=n;i++){
	        dp[i][0] = 1;
	    }
	    
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=sum;j++){
	            
	            dp[i][j] = dp[i-1][j];
	            if(j>=arr[i-1]){
	                
	                dp[i][j] = dp[i][j] or dp[i-1][j-arr[i-1]];
	                
	            }
	            
	        }
	    }
	    
	    int res = INT_MAX;
	    
	    for(int i=0;i<sum;i++){
	        
	        if(dp[n][i]){
	            
	            res = min(res,abs(sum-2*i));
	        }
	        
	    }
	    
	    return res;
	    
	} 
};