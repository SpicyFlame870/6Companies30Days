#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

int sum(Node* root)
{
    if(root == NULL)return 0;
    return sum(root->left)+sum(root->right)+root->data;
}
void toSumTree(Node *root)
{
    if(root == NULL)return;
    
    int s = sum(root)-root->data;
    root->data = s;
    
    toSumTree(root->left);
    toSumTree(root->right);
}