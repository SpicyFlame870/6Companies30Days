class Solution {
  public:
    int findPosition(int n , int m , int k) {
        
       int ans = (k+m-1)%n;
       
       if(ans==0)return n;
       
       return ans;
    }
};