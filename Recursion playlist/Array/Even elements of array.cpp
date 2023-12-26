#include <iostream>

using namespace std;
void Even(int a[],int index,int n)
{
    if(index==n)
    return ;
    if(a[index]%2==0)
    cout<<a[index]<<" ";
    Even(a,index+1,n);
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
    cout<<"Even elemets is:";
    Even(arr,0,n);

    return 0;
}
