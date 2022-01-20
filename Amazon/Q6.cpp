class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        
        deque<int> dq;
        
        for(int i=0;i<k;i++){
            
            if(dq.empty() or arr[dq.back()]>arr[i]){
                dq.push_back(i);
            }
            else{
                while(!dq.empty() and arr[dq.back()]<arr[i]){
                    dq.pop_back();
                }
                dq.push_back(i);
            }
        }
        
        vector<int> ans;
        
        for(int i=k;i<n;i++){
            
            ans.push_back(arr[dq.front()]);
            
            if(dq.front()<=i-k){
                dq.pop_front();
            }
            
            if(dq.empty() or arr[dq.back()]>arr[i]){
                dq.push_back(i);
            }
            else{
                while(!dq.empty() and arr[dq.back()]<arr[i]){
                    dq.pop_back();
                }
                dq.push_back(i);
            }
            
            
        }
        
        ans.push_back(arr[dq.front()]);
        
        return ans;
    }
};