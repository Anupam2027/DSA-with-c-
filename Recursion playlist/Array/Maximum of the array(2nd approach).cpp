#include <iostream>

using namespace std;
int min1(int a[],int index,int n)
{
    if(index==n-1)
    return a[index];
    
    return max(a[index],min1(a,index+1,n));
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
    cout<<"Minimum array element is:"<<min1(arr,0,n);

    return 0;
}
