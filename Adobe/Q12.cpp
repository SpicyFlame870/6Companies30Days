class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        
        vector<int> ans;
        stack<int> st;
        
        int mx = a[n-1];
        for(int i=n-1;i>=0;i--){
            
            if(a[i]>=mx){
                st.push(a[i]);
                mx = a[i];
            }
            
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
            
        }
        return ans;
    }
};