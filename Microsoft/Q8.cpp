class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       queue<Node*> q;
       q.push(root);
       
       while(!q.empty()){
           
           int n = q.size();
           Node* prev = NULL;
           while(n--){
               
               Node*temp = q.front();
               q.pop();
               
               temp->nextRight = prev;
               prev = temp;
               
               if(temp->right)
                q.push(temp->right);
                
                if(temp->left)
                    q.push(temp->left);
               
               
           }
           
       }
    }    
      
};