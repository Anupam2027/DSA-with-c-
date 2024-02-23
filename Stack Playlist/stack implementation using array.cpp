#include <iostream>
using namespace std;
//Implementation using array
class stack
{
    int *arr;
    int size;
    int top;
    public:
    bool flag;
    //construction
    stack(int s)
    {
        size=s;
        top=-1;
        arr=new int[s];
        flag=1;
    }
    //push
    void push(int value)
    {
        if(top==size-1)
        {
            cout<<"Stack Overflow\n:";
            return;
        }
        else
        {
            top++;
            arr[top]=value;
            cout<<"Pushed  " <<value<< " into the stack\n";
            flag=0;
        }
    }
    //pop
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack underflow\n:";
            return;
        }
        else
        {
            cout<<"Poped  " <<arr[top]<< " from the stack\n";
            top--;
            if(top==-1)
            {
                flag=1;
            }
        }
    }
    //peek
    int peek()
    {
      if(top==-1)
        {
            cout<<"Stack empty\n:";
            return -1;
        }
        else
        {
            return arr[top];
        }  
    }
    //IsEmpty
    bool IsEmpty()
    {
        return top==-1;
    }
    //IsSize
    int IsSize()
    {
        return top+1;
    }
};
int main()
{
    stack S(5);
    S.push(-1);
    int value =S.peek();
    if(S.flag==0)
    cout<<value<<endl;
    
    
    // S.pop();
    // cout<<S.peek()<<endl;
    // cout<<S.IsSize()<<endl;
   
    return 0;
}