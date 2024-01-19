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
    Node *Head;
    Head=NULL;

    int arr[5]={2,4,6,8,10};
    //Insert the Node at End
    //Linked list does'nt exist
    for(int i=0;i<5;i++)
    {
    if(Head==NULL)
    {
        Head=new Node(arr[i]);
    }
    //Linked list exist karti h
    else
    {
        Node *tail=Head;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        Node *temp;
        temp=new Node(arr[i]);
        tail->next=temp;
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