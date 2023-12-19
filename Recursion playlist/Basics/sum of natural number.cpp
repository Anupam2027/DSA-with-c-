#include <iostream>

using namespace std;
int printn(int x)
{
    if(x==1)
    return 1;
    return x+printn(x-1);
}

int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    if(n<1)
    {
    cout<<"Please enter natural number !! ";
    return 0;
    }
    cout<<"Sum of natural number:"<<printn(n);

    return 0;
}
