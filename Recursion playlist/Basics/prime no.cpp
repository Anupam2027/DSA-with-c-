#include <iostream>

using namespace std;
int prime(int di, int n)
{
    if(di<n)
    return 1;
    if(n%di==0)
   {
       di=di+1;
   }
       return prime(di,n);
    
}
int main()
{
   int n,di=2,r;
   cout<<"Enter the number:";
   cin>>n;
   if(n<2)
   {
       cout<<"This is not a prime number:";
       return 0;
   }
   r=prime(di,n);
   if(r==1)
   cout<<"This is prime number!!";
   else
   cout<<"This is not prime number!!";

    return 0;
}