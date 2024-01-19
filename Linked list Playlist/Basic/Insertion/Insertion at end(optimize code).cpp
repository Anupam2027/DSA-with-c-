#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
int main()
{
    Node *Head,*tail;
    Head=tail=NULL;

    int arr[5]={2,4,6,8,10};
    //Insert the Node at End
    //Linked list does'nt exist
    for(int i=0;i<5;i++)
    {
    if(Head==NULL)
    {
        Head=new Node(arr[i]);
        tail=Head;
    }
    //Linked list exist karti h
    else
    { 
       tail->next=new Node(arr[i]);
       tail=tail->next;
    }
    }
    //print the element
    Node *temp=Head;
    while(temp) //we can use ( temp!-NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        
    };
    
    return 0;
}