#include <iostream>

using namespace std;
int fibo(int x)
{
   
    if(x<=1)
    return x;
    return fibo(x-2)+fibo(x-1);
   
}
int main()
{
    int n;
    cout<<"Enter the number which you want:";
    cin>>n;
    if(n<0)
    {
        cout<<"Please enter the positive integer only!! :)";
        return 0;
    }
    cout<<"Fibonacci series of this no is:"<<fibo(n);

    return 0;
}
