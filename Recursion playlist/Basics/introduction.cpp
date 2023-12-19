#include <iostream>

using namespace std;


void fun3(int n)
{
    //base case
    if(n==0)
    {
      cout<<  "Happy birthday"<<endl; 
      return;
    }
     cout<<n<<" " <<  "days left for birthday"<<endl;
     fun3(n-1);
}

int main()
{
   int n=3;
   //recursion approach
   cout<<  "Recursion appeoach"<<endl; 
   fun3(10);
   
  //Iterative approach
  cout<<  "Iterative appeoach"<<endl;
  for(int i=n;i>0;i--)
  {
      cout<<i<<" " <<  "days left for birthday"<<endl;
       
  }
  cout<<"Happy  birthday";
    return 0;
}
