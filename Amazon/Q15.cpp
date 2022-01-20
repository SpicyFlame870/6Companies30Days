class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        
        while(head){
            
            for(int i=0;i<M-1 and head;i++){
                head = head->next;
            }   
            
            Node* temp=NULL;
            
            for(int i=0;i<N and head and head->next;i++){
                
                temp = head->next->next;
                
                delete head->next;
                head->next = temp;
                
                
            }
        
            head = temp;
        }
        
        
    }
};