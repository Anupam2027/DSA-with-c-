#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    S.push(6);
    S.push(7);
    S.pop();
    cout<<S.size()<<endl;
    cout<<S.empty()<<endl;
    cout<<S.top()<<endl;
    S.pop();
    cout<<S.top()<<endl;
    cout<<S.size()<<endl;

    return 0;
}