class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    {
        vector<int> ans;
        
        int r1 = 0, r2 = r-1;
        int c1 = 0, c2 = c-1;
        
        while(r1<=r2 and c1<=c2){
            
            for(int i=c1;i<=c2;i++){
                ans.push_back(arr[r1][i]);
            }
            r1++;
            
            if(r1>r2){
                break;
            }
            for(int i=r1;i<=r2;i++){
                ans.push_back(arr[i][c2]);
            }
            c2--;
            
            if(c1>c2){
                break;
            }
            
            for(int i=c2;i>=c1;i--){
                ans.push_back(arr[r2][i]);
            }
            r2--;
            
            for(int i=r2;i>=r1;i--){
                ans.push_back(arr[i][c1]);
            }
            c1++;
        }
        
        return ans;
    }
};