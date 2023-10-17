#include <iostream>

using namespace std;

int main()
{
     int num,rem ,ans=0,mul=1;
    cout<<"enter the any binary number which you want to convert in decimal:";
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul=mul*2;
    }
    cout<<ans<<endl;

    return 0;
}
