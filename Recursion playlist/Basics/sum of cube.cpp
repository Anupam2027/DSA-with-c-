#include <iostream>

using namespace std;
int cubs( int x)
{
    //base condition
    if(x==1)
    return 1;
      
    return x*x*x+cubs(x-1) ;
}

int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    if(n<=1)
     {
     cout<<"Please enter natural number !! ";
     return 0;
     }
    cout<<"Sum of cubes of number:"<<cubs(n);

    return 0;
}
