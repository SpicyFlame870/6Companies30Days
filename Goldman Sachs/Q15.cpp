class Solution {
  public:
    bool canPair(vector<int> arr, int k) {
        
        if(arr.size()%2==1)return false;
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<arr.size();i++){
            
            
            mp[arr[i]%k]++;
        
        }
        
        for(int i=0;i<arr.size();i++){
            
            if(mp[arr[i]%k]!=0){
                
                mp[arr[i]%k]--;
                int t = k - arr[i]%k;
                
                if(mp[t%k]==0)
                    return false;
                    
                mp[t%k]--;
                
                
                
            }
            
            
        }
        
        return true;
        
    }
};