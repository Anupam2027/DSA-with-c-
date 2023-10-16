 #include <iostream>

using namespace std;

int main()
{
     int num,rem ,ans=0,mul=1;
    cout<<"enter the any octal  number which you want to convert in Decimal:";
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul=mul*8;
    }
    cout<<ans<<endl;

    return 0;
}
