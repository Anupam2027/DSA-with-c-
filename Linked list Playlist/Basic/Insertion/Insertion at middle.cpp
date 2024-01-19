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
Node* CreateLinkedList(int arr[],int index,int size,Node * prev)
{
    if(index==size) //Base Case
    {
        return prev;
    }
    Node* temp=new Node(arr[index]);
    temp->next=prev;
    return CreateLinkedList(arr,index+1,size,temp);
}
int main()
{
    Node *Head;
    Head=NULL; 

    int arr[5]={2,4,6,8,10};
    Head=CreateLinkedList(arr,0,5,Head);
    //Insert Node at particular position
    int x=3;//insert position
    int value=30;
    Node *temp1=Head;
    x--;
    while(x--)
    {
        temp1=temp1->next;
    };
    Node *temp2=new Node(value);
    temp2->next=temp1->next;
    temp1->next=temp2;
    //print the element
    Node *temp=Head;
    while(temp) //we can use ( temp!-NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        
    };
    
    return 0;
}