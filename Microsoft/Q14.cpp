class Solution{
public:
    int minSteps(int D){
        
        int ans = 0;
        
        int i = 0;
        
        while(i<D){
            
            ans++; 
            i += ans;
            
        }
        
        if((i-D)%2==0)return ans;
        
        if(ans%2==0)return ans+1;
        
        return ans+2;
    }
};