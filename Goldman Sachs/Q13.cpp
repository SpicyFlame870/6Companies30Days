class Solution{
public:
    
    string solve(string s,int &i){
        
        string ans = "";
        
        while(i<s.length() and s[i]!=']'){
            
            if(s[i]>=48 and s[i]<=57){
                
                int k = 0;
                
                while(s[i]>=48 and s[i]<=57){
                    
                    k = k*10;
                    k += (s[i]-48);
                    i++;
                }
                
                i++;
                string call = solve(s,i);
                
                for(int j=0;j<k;j++){
                    ans += call;
                }
            }
            else{
                ans += s[i];
            }
            i++;
        }
        return ans;
    }
    string decodedString(string s){
        
        int i = 0;
        
        return solve(s,i);
        
    }
};