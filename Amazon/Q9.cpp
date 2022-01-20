class Solution{
public:
    bool check(int *arr){
        
        for(int i=1;i<10;i++){
            if(arr[i]>1)return 0;
        }
        
        return 1;
    }
    int isValid(vector<vector<int>> arr){
        
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            
            int b[10] = {0};
            
            for(int j=0;j<n;j++){
                b[arr[i][j]]++;
            }
            
            if(!check(b))return 0;
            
        }
        
        for(int i=0;i<n;i++){
            
            int b[10] = {0};
            
            for(int j=0;j<n;j++){
                b[arr[j][i]]++;
            }
            
            if(!check(b))return 0;
            
        }
        
        for(int i=0;i<n;i+=n/3){
            
            for(int j=0;j<n;j+=n/3){
                
                int b[10] = {0};
                
                int si = i + n/3 - 1;
                int sj = j + n/3 - 1;
                
                for(int k=i;k<=si;k++){
                    for(int l=j;l<=sj;l++){
                        b[arr[k][l]]++;
                    }
                }
                
                if(!check(b))return 0;
                
            }
            
        }
        
        return 1;
    }
};