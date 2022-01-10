typedef long long ll;
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {
        
        ll t = 1;
        
        int j = 0;
        int ans = 0;
        
        for(int i=0;i<n;i++){
            
            t *= arr[i];
        
            
            while( t>=k and j<=i){
                
                t = t/arr[j];
                j++;
        
            }
            
            ans += i-j+1;
                
            
        }
        
        return ans;
    }
};