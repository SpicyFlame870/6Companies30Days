string encode(string src)
{     
    string s;
    
    int i = 1;
    int c = 1;
    
    while(i<src.length()){
        
        if(src[i]==src[i-1]){
            c++;
        }
        else{
            
            s.push_back(src[i-1]);
            s.push_back(c+48);
            c = 1;
            
        }
        i++;
    }
    s.push_back(src[i-1]);
    s.push_back(c+48);
    
    return s;
    
}   