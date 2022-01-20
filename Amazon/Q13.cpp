#define ff first
#define ss second
class Solution {
public:
    int orangesRotting(vector<vector<int>>& arr) {
        
        int n = arr.size();
        int m = arr[0].size();
        
        queue<pair<int,int>> q;
        
        int rt = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==2){
                    q.push({i,j});
                }
                else if(arr[i][j]==1){
                    rt++;
                }
            }
        }
        
        int time = 0;
        while(!q.empty()){
            
            int t = q.size();
            
            if(rt==0){
                return time;
            }
            while(t--){
                
                pair<int,int> top = q.front();
                q.pop();
                
                
                
                if(top.ff!=n-1 and arr[top.ff+1][top.ss]==1){
                    arr[top.ff+1][top.ss] = 2;
                    q.push({top.ff+1,top.ss});
                    rt--;
                }
                if(top.ff!=0 and arr[top.ff-1][top.ss]==1){
                    arr[top.ff-1][top.ss] = 2;
                    q.push({top.ff-1,top.ss});
                    rt--;
                }
                if(top.ss!=0 and arr[top.ff][top.ss-1]==1){
                    arr[top.ff][top.ss-1] = 2;
                    q.push({top.ff,top.ss-1});
                    rt--;
                }
                if(top.ss!=m-1 and arr[top.ff][top.ss+1]==1){
                    arr[top.ff][top.ss+1] = 2;
                    q.push({top.ff,top.ss+1});
                    rt--;
                }
                
               
            }
            time++;
            
            
        }
        
        if(rt==0){
            return time;
        }
        
        return -1;
    }
};