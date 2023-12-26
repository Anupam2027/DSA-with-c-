#include <iostream>

using namespace std;
int min(int a[],int index,int n,int key)
{
    if(index==n)
    return key;
    if(a[index]>key)
    key=a[index];
    return min(a,index+1,n,key);
}
int main()
{
    int arr[100],n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the elements of  the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key=arr[0];
    cout<<"Minimum array element is:"<<min(arr,0,n,key);

    return 0;
}