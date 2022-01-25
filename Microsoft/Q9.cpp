#define ff first
#define ss second
pair<int,int> solve(Node* root,int X){
    
    if(!root)return {0,0};
	
	pair<int,int> lt = solve(root->left,X);
	pair<int,int> rt = solve(root->right,X);
	
	if(lt.ff + rt.ff + root->data == X){
	    
	    return {X,lt.ss+rt.ss+1};
	}
	
	return {lt.ff + rt.ff + root->data, lt.ss+rt.ss};
	
}
int countSubtreesWithSumX(Node* root, int X)
{
	return solve(root,X).ss;
	
}