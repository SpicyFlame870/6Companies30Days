class Solution {
public:
    int longestMountain(vector<int>& arr) {
        
        int n = arr.size();
        
        int left[n],right[n];
        
        left[0] = right[n-1] = 0;
        
        for(int i=1;i<n;i++){
            
            if(arr[i]>arr[i-1]){
                left[i] = left[i-1]+1;
            }
            else{
                left[i] = 0;
            }
            
        }
        
        for(int i=n-2;i>=0;i--){
            
            if(arr[i]>arr[i+1]){
                right[i] = right[i+1]+1;
            }
            else{
                right[i] = 0;
            }
            
        }
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            
            if(left[i]!=0 and right[i]!=0)
                ans = max(ans,left[i]+right[i]);
        }
        ans++;
        
        if(ans<3)return 0;
        
        return ans;
        
    }
};