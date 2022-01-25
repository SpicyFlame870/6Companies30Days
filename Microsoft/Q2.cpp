class Solution {
public:
    bool cycle(int node,vector<int> adj[],bool vis[],bool stk[]){
        
        vis[node] = stk[node] = true;
        
        for(auto nbr:adj[node]){
            
            if(stk[nbr]){
                return true;
            }
            else if(!vis[nbr]){
                
                if(cycle(nbr,adj,vis,stk)){
                    return true;
                }
                
            }
            
        }
        
        stk[node] = false;
        
        return false;
    }
	bool isPossible(int n, vector<pair<int, int> >& pre) {
	    
	    vector<int> adj[n];
	    
	    for(auto x:pre){
	        adj[x.second].push_back(x.first);
	    }
	    
	    bool *vis = new bool[n];
		bool *stk = new bool[n];

		for(int i=0;i<n;i++){
			vis[i] = stk[i] = false;
		}
	    
	    for(int i=0;i<n;i++){
	        
	        if(!vis[i] and cycle(i,adj,vis,stk)){
	             return false;
	        }
	    }
	    return true;
	}
};