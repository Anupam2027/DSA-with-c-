#include <iostream>

using namespace std;
int powr(int num, int x)
{
    //base condition
    if(x==0)
    return 1;
      
    return num*powr(num,x-1) ;
}

int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    if(n<0)
     {
     cout<<"Please enter natural number !! ";
     return 0;
     }
    cout<<"Power of 2:"<<powr(2,n);

    return 0;
}
