class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
       vector<int> ans;
       
       stack<int> st;
       
       for(int i=0;i<n;i++){
           
           int k = i;
           int t = 0;
           
           while(!st.empty() and arr[st.top()]<=arr[i]){
               
               t += k-st.top();
               k = st.top();
               st.pop();
           }
           
           if(!st.empty()){
               t += k-st.top();
           }
           else t += k+1;
           
           st.push(i);
           
           
           
           ans.push_back(t);
       }
       
       return ans;
    }
};