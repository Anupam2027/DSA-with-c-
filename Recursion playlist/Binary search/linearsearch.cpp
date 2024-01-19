#include <iostream>

using namespace std;
int linearsearch(int arr[],int X,int index,int N)
{
    if(index==N)
    return -1;
    if(arr[index]==X)
    return index;
    return linearsearch(arr,X,index+1,N);
    
}

int main()
{
    int arr[]={3,2,5,6,7,8};
    int X=7;
    cout<<linearsearch(arr,X,0,6)<<endl;

    return 0;
}