class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        
        
        
        int n = arr.size();
        if(n<4)return {};
        
        vector<vector<int>> ans;
        set<vector<int>> st;
        sort(arr.begin(),arr.end());
      
        int i=0;
    
        while(i<n-3){
            int j = i + 1;
            while(j<n-2){
                
                
                int l = j+1;
                int r = n-1;
                
                while(l<r){
                    
                    int sum = arr[l]+arr[r]+arr[i]+arr[j];
                    if(sum==k){
                        st.insert({arr[i],arr[j],arr[l],arr[r]});
                        l++;
                        r--;
                    }
                    else if(sum>k){
                        r--;
                    }
                    else l++;
                }
                j++;
            }
            i++;
        }
        for(auto v:st){
            ans.push_back(v);
        }
        return ans;
    }
