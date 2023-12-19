#include <iostream>
using namespace std;

int main()
{
     int arr[100];
    int i,j,n;
    int key;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"Enter the elements of the array:";
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }
    cout<<"Enter the any no which you want to search:";
    cin>>key;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])==key)
            cout<<arr[i]<<" "<<arr[j]<<endl;
            
        }
    }
   // cout<<"Not any two no";

    return 0;
}