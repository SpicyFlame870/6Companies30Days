vector<string> generate(int n)
{
	vector<string> ans;
	
	for(int i=1;i<=n;i++){
	    
	    int k = i;
	    
	    string s = "";
	    
	    while(k){
	        s = char(k%2 + 48) + s;
	    
	        k = k/2;
	    }
	    ans.push_back(s);
	}
	
	return ans;
}