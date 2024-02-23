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
int main()
{
    Node *Head,*tail=NULL;
    Head=NULL;

    int arr[]={2,4,6,8,10};
    //Insert the Node at end
    
    for(int i=0;i<5;i++)
    {
    //Linked list does'nt exist
    if(Head==NULL)
    {
        Head=new Node(arr[i]);
        tail=Head;
    }
    //Linked list exist karti h
    else
    {
        Node *temp;
        temp=new Node(arr[i]);
        tail->next=temp;
        temp->prev=tail; 
        tail=temp;
        
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