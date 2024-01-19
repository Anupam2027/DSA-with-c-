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
Node* CreateLinkedList(int arr[],int index,int size)
{
    if(index==size) //Base Case
    {
        return NULL;
    }
    Node* temp=new Node(arr[index]);
    temp->next=CreateLinkedList(arr,index+1,size);
    return temp;
}
int main()
{
    Node *Head;
    Head=NULL; 

    int arr[5]={2,4,6,8,10};
    Head=CreateLinkedList(arr,0,5);
    //print the element
    Node *temp=Head;
    while(temp) //we can use ( temp!-NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        
    };
    
    return 0;
}