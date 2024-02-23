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
class stack
{
    Node * top;
    int size;
    public:
    stack()
    {
        top=NULL;
        size=0;
    }
    //push
    void push(int value)
    {
        Node * temp=new Node(value);
        if(temp==NULL)
        {
            cout<<"stack is overflow:";
            return;
        }
        else
        {
        
        temp->next=top;
        top=temp;
        size++;
        cout<<"pushed "<<value<<" into the stack\n";
        }
    }
    //pop
    void pop()
    {
        if(top==NULL)
        {
            cout<<"stack is under flow:";
            return;
        }
        else
        {
          Node * temp=top;
          cout<<"poped "<<top->data<<" from the stack\n";
          top=top->next;
          delete temp;
          size--;
        }
    }
    //peek
    int peek()
    {
        if(top==NULL)
        {
            cout<<"stack is empty:";
            return -1;
        }
        else
        return top->data;
    }
    //IsEmpty
    bool IsEmpty()
    {
        return top==NULL;
    }
    //IsSize
    int IsSize()
    {
        return size;
    }

    
};
int main()
{
    stack S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    S.push(6);
    S.push(7);
    S.pop();
    cout<<S.IsSize()<<endl;
    cout<<S.IsEmpty()<<endl;

    return 0;
}
