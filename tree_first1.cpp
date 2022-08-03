#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *right;
    struct Node *left;
    Node(int val)
    {
        data = val;
        left=right=NULL;
    }
};
void Inorder(Node* root)
{
    if(root==NULL)
    return;
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void preorder(Node* root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
struct Node *create()
{
    int x;
    struct Node *newnode;
    cout<<"Enter -1 for return"<<endl;
    cin>>x;
    if(x==-1)
        return NULL;
    newnode = new Node(x);
    cout<<"Enter left chield of node: "<<x<<endl;
    newnode->left = create();
    cout<<"Enter right chield of node: "<<x<<endl;
    newnode->right = create();
    return newnode;
}
int main()
{
    struct Node *root;
    root = create();
    Inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
}
    