#include <iostream>

using namespace std;
int sum(int a[],int n)
{
    if(n==-1)
    {
        
        return 0;
    }
     
     return a[n]+sum(a,n-1);
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
    cout<<"Sum of array element is:"<<sum(arr,n);

    return 0;
}