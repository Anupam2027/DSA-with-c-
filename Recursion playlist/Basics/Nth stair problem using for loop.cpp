#include <iostream>

using namespace std;

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
    if(n<=1)
    {
        cout<<"Climestair is:"<<1;
        return 0;
    }
    int t1=1,t2=1,sum,sum1;
    sum1=t1+t2;
    for(int i=3;i<=n;i++)
    {
        sum=sum1;
        sum1=t2+sum;
        t2=sum;
    }
    cout<<"Climestair is:"<<sum1;

    return 0;
}
