#include <iostream>

using namespace std;


void print(int n)
{
    //base case
    if(n==2)
    {
      cout<<2<<endl;
      return;
    }
   cout<<n<<endl;
   print(n-2);
}

int main()
{ 
   //print even no from n to 2
  //recursion approach apprach
  cout<<"recursion apprach"<<endl;
  int n;
  cout<<"Enter the value of n:";
  cin>>n;
  print( n); 
    return 0;
}