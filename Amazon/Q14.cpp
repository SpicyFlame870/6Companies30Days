#define ff first
#define ss second
class Solution {
  public:
    int dfs(Node*root){
        
        if(!root)return 0;
        
        return 1 + max(dfs(root->left),dfs(root->right));
    }
    pair<int,int> solve(Node* root,int target){
        
        if(!root){
            return {-1,0};
        }
        if(root->data == target){
            
            return {1,max(dfs(root->left),dfs(root->right))};
            
        }
        
        pair<int,int> lt,rt;
        
        lt = solve(root->left,target);
        rt = solve(root->right,target);
        
        
        if(rt.ff!=-1){
            return {1+rt.ff,max(rt.ff+lt.ss,rt.ss)};
        }
        if(lt.ff!=-1){
            return {1+lt.ff,max(lt.ff+rt.ss,lt.ss)};
        }
        
        return {-1,1+max(lt.ss,rt.ss)};
    }
    int minTime(Node* root, int target) 
    {
        return solve(root,target).ss;
        
    }
};