#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};
Node* CreateLinkedList(int arr[],int index,int size,Node *back)
{
    if(index==size) //Base Case
    {
        return NULL;
    }
    //create node
    Node* temp=new Node(arr[index]);
    temp->prev=back;
    temp->next=CreateLinkedList(arr,index+1,size,temp);
    return temp;
}
int main()
{
    Node *Head;
    Head=NULL; 

    int arr[5]={2,4,6,8,10};
    Head=CreateLinkedList(arr,0,5,NULL);
    //print the element
    Node *temp3=Head;
    while(temp3) //we can use ( temp!-NULL)
    {
        cout<<temp3->data<<" ";
        temp3=temp3->next;
        
    };
    
    return 0;
}