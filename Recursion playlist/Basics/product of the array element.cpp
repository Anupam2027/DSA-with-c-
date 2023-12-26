#include <iostream>

using namespace std;
int sum(int a[],int index,int n)
{
    if(index==n)
    {
        
        return 1;
    }
     
     return a[index]*sum(a,index+1,n);
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
    cout<<"Sum of array element is:"<<sum(arr,0,n);

    return 0;
}