class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int i = 0,j = 0;
        
        long long sum = 0;
        
        while(j<n){
            
            
            if(sum==s){
                return {i+1,j};
            }
            
            if(sum<s){
                sum += arr[j];
                j++;
            }
            
            while(i<j and sum>s){
                sum -= arr[i];
                i++;
            }
            
           
            
            
        }
       
        if(sum==s){
            return {i+1,j};
        }
            
        return {-1};
    }
};