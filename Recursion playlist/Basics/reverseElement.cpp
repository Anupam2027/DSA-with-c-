#include <iostream>

using namespace std;
void printarray(int a[],int index)
{
    if(index==0)
    {
        cout<<a[index]<<endl;
        return;
    }
        
        cout<<a[index+1]<<endl;
        printarray(a,index-1);
    
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int r=sizeof(arr[0]);
    printarray(arr,r);

    return 0;
}
