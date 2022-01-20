class Solution {
	public:
		string FirstNonRepeating(string s){
		    
		    string ans;
		    queue<char> q;
		    int mp[26] = {0};
		    
		    for(int i=0;i<s.length();i++){
		        
		        if(mp[s[i]-97]==0)
		            q.push(s[i]);
		        Q
		        mp[s[i]-97]++;
		        
		        while(!q.empty() and mp[q.front()-97]!=1){
		            q.pop();
		        }
		        
		        if(q.empty()){
		            ans.push_back('#');
		        }
		        else{
		            ans.push_back(q.front());
		        }
		    }
		    return ans;
		    
		}

};