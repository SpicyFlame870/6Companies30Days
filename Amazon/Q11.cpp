class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    void pre(Node* root,vector<int> &arr){
        
        if(!root){
            arr.push_back(-1);
            return;
        }
        arr.push_back(root->data);
        pre(root->left,arr);
        pre(root->right,arr);
        
    }
    
    vector<int> serialize(Node *root) 
    {
        vector<int> arr;
        
        pre(root,arr);
        
        
        return arr;
    }
    
   
    Node* solve(vector<int> A,int &i){
        
        
        Node* root = new Node(A[i]);
        
        i++;
        
        if(A[i]!=-1){
            root->left = solve(A,i);
        }
        i++;
        if(A[i]!=-1){
            root->right = solve(A,i);
        }
        
        return root;
    }
    Node * deSerialize(vector<int> &A)
    {
        
        int i = 0;
        
        return solve(A,i);
    }

};