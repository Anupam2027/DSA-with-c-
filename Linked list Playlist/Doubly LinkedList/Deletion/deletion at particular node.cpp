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
    //Delete at given position 
    int pos=2;
    if(Head!=NULL)
    {
    //delete at start
    if(pos==1)
    {
      //if we have only one node
    if(Head->next==NULL)
    {
        delete Head;
        Head=NULL;
        
    }
    //If node is more than one node
    else
    {
        Node *curr=Head;
        while(curr->next)
        {
            curr=curr->next;
        }
        curr->prev->next=NULL;
        delete curr;
    }  
    }
    else
    {
        Node * curr=Head;
        while(--pos)
        curr=curr->next;
    //delete at end 
    if(curr->next==NULL)
    {
       curr->prev->next=NULL;
       delete curr;
    }
    else
    {
        curr->prev->next=curr->next;
        curr->next->prev=curr->prev;
        delete curr;
    }
    //delete at middle
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