#include <iostream>

using namespace std;

int main()
{
   int arr[1000],count0=0,count1=0,i,n; 
   cout<<"Enter the size of array ";
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(i=0;i<n;i++)
   {
       if(arr[i]==0)
       count0++;
       else
       count1++;
   }
   for(i=0;i<count0;i++)
   {
       arr[i]=0;
   }
   for(i=count0;i<n;i++)
   {
       arr[i]=1;
   }
   for(i=0;i<n;i++)
   {
       cout<<arr[i];
   }
   
    return 0;
}
