#include <iostream>

using namespace std;

int main()
{
   //variable ke heap memory allocation
   int *ptr=new int;
   *ptr=5;
   cout<<*ptr<<endl;//value assing 
   float *ptr2=new float;
   *ptr2=5.8;
   cout<<*ptr2<<endl;//value assing 
   int n;
   cout<<"enter the size of array"<<endl;
   cin>>n;
   
   int *p=new int[n];
   //value dalo
   for(int i=0;i<n;i++)
   p[i]=i+1;
   
   //print the value
   for(int i=0;i<n;i++)
   cout<<p[i]<<endl;
   //delete keyword 
   delete ptr;
   delete ptr2;
   delete[] p;

    return 0;
}
