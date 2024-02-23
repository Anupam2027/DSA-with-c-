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
    //insert element at anu position
    int pos=5;
    //insert at start
    if(pos==0)
    {
        //ll is not exist
        if(Head==NULL)
        {
         Head=new Node(5);
        }
        //LL is exist
        else
        {
            Node *temp=new Node(5);
            temp->next=Head;
            Head->prev=temp;
            Head=temp;
        }
    }
    else
    {
        Node *curr=Head;
        //go to tje node,after which i have to insert
        while(--pos)
        {
            curr=curr->next;
        }
        //insert at end
        if(curr->next==NULL)
        {
        Node *temp=new Node(5);
            temp->prev=curr;
            curr->next=temp;
        }
        //insert at middle
        else
        {
          Node *temp=new Node(5);
            temp->next=curr->next;
            temp->prev=curr;
            curr->next=temp;
            temp->next->prev=temp;
        }
    }
    //print the element
    Node *temp3=Head;
    while(temp3) //we can use ( temp!-NULL)
    {
        cout<<temp3->data<<" ";
        temp3=temp3->next;
        
    };
    
    return 0;
}