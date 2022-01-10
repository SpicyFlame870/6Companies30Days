class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        
        int *ans = new int[2];
        
        for(int i=0;i<n;i++){
            
            int num = abs(arr[i]);
            arr[num-1] *= -1;
            
            if(arr[num-1]>0)
                ans[0] = num;
            
        }
        
        for(int i=0;i<n;i++){
            
            if(arr[i]>0 and (i+1)!=ans[0]){
                ans[1] = i+1;
                break;
            }
        }
        return ans;
    }
};