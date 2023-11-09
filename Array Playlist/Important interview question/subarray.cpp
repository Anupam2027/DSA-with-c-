#include <iostream>

using namespace std;

int main()
{
    int arr[1000],n,i;
    cout<<"Enter the size of array:";
    cin >>n;
    cout<<"Enter the elements of the array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //sunarray of array's of 1 size
    cout<<"sunarray of array's of 1 size:"<<endl;
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    //sunarray of array's of 2 size
     cout<<endl<<"sunarray of array's of 2 size:"<<endl;
    for(i=0;i<n-1;i++)
    cout<<arr[i]<<arr[i+1]<<" ";
    //sunarray of array's of 3 size
     cout<<endl<<"sunarray of array's of 3 size:"<<endl;
     for(i=0;i<n-2;i++)
    cout<<arr[i]<<arr[i+1]<<arr[i+2]<<" ";
    //sunarray of array's of 4 size
     cout<<endl<<"sunarray of array's of 4 size:"<<endl;
     for(i=0;i<n-3;i++)
    cout<<arr[i]<<arr[i+1]<<arr[i+2]<<arr[i+3]<<" ";

    return 0;
}
