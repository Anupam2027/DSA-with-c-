#include <iostream>

using namespace std;
int binarysearch(int arr[],int X,int start,int end)
{
    if(start>end)
    return 0;
    int mid=start+(end-start)/2;
    if(arr[mid]==X)
    return 1;
    else if(arr[mid]<X)
    return binarysearch(arr,X,mid+1,end);
    else
    return binarysearch(arr,X,start,mid-1);
    
}

int main()
{
    int arr[]={3,2,5,6,7,8};
    int X=6;
    int start=0,end=6;
    //int mid=start+end/2;
    cout<<binarysearch(arr,X,start,end)<<endl;

    return 0;
}
