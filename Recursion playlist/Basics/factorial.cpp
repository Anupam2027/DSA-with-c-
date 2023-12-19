#include <iostream>

using namespace std;
int factor(int n)
{
    int r;
    if(n==1)
    return 1;
    
    r= n*factor(n-1);
    return r;
}

int main()
{
    int n,factorial;
    cout<<"Enter the value of n";
    cin>>n;
    factorial=factor(n);
    cout<<"factorial:"<<factor(n);

    return 0;
}