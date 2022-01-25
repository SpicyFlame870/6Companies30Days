class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    
    void dfs1(int node,vector<int> adj[],bool vis[],int c,int d){
        
        vis[node] = true;
        
        for(auto nbr:adj[node]){
            
            
            if(!vis[nbr]){
                dfs1(nbr,adj,vis,c,d);
            }
            
        }
        
    }
    void dfs2(int node,vector<int> adj[],bool vis[],int c,int d){
        
        vis[node] = true;
        
        for(auto nbr:adj[node]){
            
            if(nbr==c and node==d){
                continue;
            }
            if(nbr==d and node==c){
                continue;
            }
            
            if(!vis[nbr]){
                dfs2(nbr,adj,vis,c,d);
            }
            
        }
        
    }
    int isBridge(int n, vector<int> adj[], int c, int d) 
    {
        
        bool vis1[n] = {0};
        bool vis2[n] = {0};
        
        int cnt1 = 0,cnt2 = 0;
        
        for(int i=0;i<n;i++){
            
            if(!vis1[i]){
                cnt1++;
                dfs1(i,adj,vis1,c,d);
            }
        }
        
        for(int i=0;i<n;i++){
            
            if(!vis2[i]){
                cnt2++;
                dfs2(i,adj,vis2,c,d);
            }
        }
        
        return cnt2>cnt1;
    }
};