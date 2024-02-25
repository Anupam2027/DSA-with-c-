#include <iostream>
using namespace std;
//creation of node
class Node
{
    public:
    int data;
    Node* left,*right;
    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};
//creation pf binarytree
Node * BinaryTree()
{
    int x; 
    cin>>x;
    if(x==-1)
    return NULL;
    
    Node* temp=new Node(x);
    //left side
    cout<<"Enter left child of "<<x<<":";
    temp->left=BinaryTree();
    //right side
    cout<<"Enter right child of "<<x<<":";
    temp->right=BinaryTree(); 
    return temp;
}
//Pre-order Traversal
void Pre_order(Node * root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    Pre_order(root->left); //left side
    Pre_order(root->right); //right side
}
int main()
{
    cout<<"Enter the root node:";
    Node *root;
    root=BinaryTree();
    cout<<"In pre-order traversal, Tree look like this:";
    Pre_order(root);

    return 0;
}