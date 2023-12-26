#include <iostream>

using namespace std;
int sum(int a[],int index,int n,int summ)
{
    if(index==n)
    {
        summ=summ+a[index];
        return summ;
    }
     summ=summ+a[index];
     return sum(a,index+1,n,summ);
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
    cout<<"Sum of array element is:"<<sum(arr,0,n,0);

    return 0;
}
