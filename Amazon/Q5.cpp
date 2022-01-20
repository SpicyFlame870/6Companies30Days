class trie{
  
  trie* nxt[26];
  bool terminal;
  
  public:
    trie(){
        
        for(int i=0;i<26;i++){
            this->nxt[i] = NULL;
        }
        terminal = false;
    }
    trie* insert(string s){
        
        trie* curr = this;
        
        for(int i=0;i<s.size();i++){
            
            if(!curr->nxt[s[i]-'a']){
                curr->nxt[s[i]-'a'] = new trie();
            }
            curr = curr->nxt[s[i]-'a'];
        }
        
        curr->terminal = true;
    }
    
    void dfs(string s,vector<string> &ans){
        

        if(this->terminal){
            ans.push_back(s);
        }
        
        for(int i=0;i<26;i++){
            
            if(this->nxt[i]){
                this->nxt[i]->dfs(s+char(97+i),ans);
            }
            
        }
        
        
    }
    vector<string> search(string s){
        
        trie* curr = this;
        
        for(int i=0;i<s.size();i++){
            
            if(!curr->nxt[s[i]-'a']){
                return {"0"};
            }
            curr = curr->nxt[s[i]-'a'];
        }
        
        vector<string> ans;
        
        curr->dfs(s,ans);
        
        return ans;
        
    }
};

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        trie* root = new trie();
        
        for(int i=0;i<n;i++){
            root->insert(contact[i]);
        }
        
        vector<vector<string>> ans;
        
        
        for(int i=0;i<s.length();i++){
            
            ans.push_back(root->search(s.substr(0,i+1)));
        }
        
        return ans;
        
    }
};