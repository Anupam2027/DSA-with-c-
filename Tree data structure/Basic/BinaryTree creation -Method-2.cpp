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
    cout<<"Enter left child of "<<x<<":";
    temp->right=BinaryTree(); 
    return temp;
}
int main()
{
    cout<<"Enter the root node:";
    Node *root;
    root=BinaryTree();

    return 0;
}
