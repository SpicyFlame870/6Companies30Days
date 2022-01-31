class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        int y = 0;
        
        string s;
        
        for(auto x:mp){
            
            if(y<x.second){
                s = x.first;
                y = x.second;
            }
        
        }
        
        
        
        for(auto x:mp){
            if(x.second==y){
                s = min(s,x.first);
            }
        }
        
        return {s,to_string(y)};
    }
};