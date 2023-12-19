#include <iostream>

using namespace std;


void print(int n)
{
    //base case
    if(n==1)
    {
      cout<<1<<endl;
      return;
    }
   cout<<n<<endl;
   print(n-1);
}

int main()
{ 
   //loop apprach 
   cout<<"loop apprach"<<endl;
    int n=5;
  //print n to 1 
  for(int i=n;i>0;i--)
  cout<<i<<endl;
  //recursion approach apprach
  cout<<"recursion apprach"<<endl;
  print( n); 
    return 0;
}