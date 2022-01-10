class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        
        vector<vector<string>> ans;
        
        map < map<char,int> ,vector<string> > fmp;
        
        for(auto s: string_list){
            
            map<char,int> mp;
            
            for(auto x:s){
                mp[x]++;
            }
            
            fmp[mp].push_back(s);
        }
        
        for(auto mp:fmp){
            
            ans.push_back(mp.second);
            
        }
        
        return ans;
        
    }
};