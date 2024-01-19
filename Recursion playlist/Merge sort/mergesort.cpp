#include <iostream>
#include <vector>
using namespace std;
void merge(int arr[],int start, int mid, int end)
{
    vector<int>temp(end-start+1);
    int left=start, right=mid+1,index=0;
    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            index++;
            left++;
        }
        else
        {
            temp[index]=arr[right];
            index++;
            right++;
        }
    }
    //left wala element bacha short ho 
    while(left<=mid)
    {
        temp[index]=arr[left];
        index++;
        left++;
    }
    //right wala element bacha short ho 
    while(right<=end)
    {
        temp[index]=arr[right];
        index++;
        right++;
    }
    //copy the temp arr value in original aaray
    index=0;
    while(start<=end)
    {
      arr[start]=temp[index];
      start++;
      index++;
    }
}
void mergesort(int arr[],int start,int end)
{
    if(start==end)
    return;
    int mid=start+(end-start)/2;
    mergesort(arr,start,mid); //left portion
    mergesort(arr,mid+1,end); //right portion
    merge(arr,start,mid,end);
    
}
int main()
{
    int arr[]={6,4,7,2,9,8,3,5};
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergesort(arr,0,7);
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}