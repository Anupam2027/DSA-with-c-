#include <iostream>

using namespace std;
void printarray(int a[],int index, int n)
{
    if(index==n)
    {
        cout<<a[index]<<endl;
        return;
    }
        
        cout<<a[index]<<endl;
        printarray(a,index+1,n);
    
}
int main()
{
    int arr[]={3,5,4,2,3};
    int r=sizeof(arr[0]),i=0;
    printarray(arr,i,r);

    return 0;
}
