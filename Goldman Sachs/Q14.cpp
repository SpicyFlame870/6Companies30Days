class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        
        int j = 0;
        int ans = INT_MAX;
        int sum = 0;
        
        for(int i=0;i<arr.size();i++){
            
            sum += arr[i];
            
            while(sum>=target and j<=i){
                
                ans = min(i-j+1,ans);
                
                sum -= arr[j];
                j++;
                
            }
            
            
            
        }
        
        return ans==INT_MAX?0:ans;
    }
};