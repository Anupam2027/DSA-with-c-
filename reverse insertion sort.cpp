#include <iostream>

using namespace std;

int main()
{
     int arr[1000],i,j,n;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"Enter the array Elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(i=n-1;i>0;i--)
    {
         for(j=i;j<n;j++)
         {
             if(arr[j]<arr[j-1])
             swap(arr[j],arr[j-1]);
            else 
            break;
         }
    
    }
    cout<<"sorted array:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
