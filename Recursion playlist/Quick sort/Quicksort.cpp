#include <iostream>

using namespace std;
int partition(int arr[],int start,int end)
{
    int pos=start;
    for(int i=start;i<=end;i++)
    {
        if(arr[i]<=arr[end])
        {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
void quicksort(int arr[],int start, int end)
{
    //Base condition
    if(start>=end)
    return;
    int pivot=partition(arr,start,end);
    quicksort(arr,start,pivot-1); //left side
    quicksort(arr,pivot+1,end); //right side
}
int main()
{
   int arr[]={6,4,2,8,13,7,11,9,3,6};
   for(int i=0;i<10;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   quicksort(arr,0,9);
   for(int i=0;i<10;i++)
   {
       cout<<arr[i]<<" ";
   }

    return 0;
}