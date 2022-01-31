class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        
        int n = 0;
        
        bool neg = 0;
        for(int i=0;i<str.size();i++){
            
            if(i==0 and str[i]=='-'){
                neg = 1;
                continue;
            }    
            
            n = n*10;
            if(str[i]<48 or str[i]>57)return -1;
            
            n += str[i]-48;
            
            
        }
        
        if(neg)n *= -1;
        
        return n;
    }
};