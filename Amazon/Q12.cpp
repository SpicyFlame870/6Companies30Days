class Solution{
    public:
    string colName (long long int n)
    {
        string s = "";
        
        while(n){
            
            n--;            
            int k = n%26;
            
            s = char('A' + k) + s;
            
            n = n/26;
            
        }
        
        return s;
    }
};