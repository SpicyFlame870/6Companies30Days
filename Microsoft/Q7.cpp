int dx[] = {1,-1,0,0,1,-1,-1,1};
int dy[] = {0,0,1,-1,1,-1,1,-1};
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int solve(vector<vector<int>> &arr,int i,int j){
        
        if(i<0 or j<0 or i>=arr.size() or j>=arr[0].size() or arr[i][j] == 0){
            return 0;
        }
        
        arr[i][j] = 0;
        int t = 0;
        
        for(int k=0;k<8;k++){
            t += solve(arr,i+dx[k],j+dy[k]);
        }
        
        return t+1;
        
    }
    int findMaxArea(vector<vector<int>>& arr) {
        
        int n = arr.size();
        int m = arr[0].size();
        
        int res = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                res = max(res,solve(arr,i,j));
            }
        }
        
        return res;
    }
};