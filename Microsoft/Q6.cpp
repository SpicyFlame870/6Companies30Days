string v[] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    void solve(int a[],int n,int i,vector<string> &ans,string s=""){
        
        if(i==n){
            ans.push_back(s);
            return;
            
        }
        
        for(int j=0;j<v[a[i]-2].length();j++){
            solve(a,n,i+1,ans,s+v[a[i]-2][j]);
        }
        
    }
    vector<string> possibleWords(int a[], int n)
    {
        vector<string> ans;
        
        solve(a,n,0,ans);
        
        return ans;
    }
};