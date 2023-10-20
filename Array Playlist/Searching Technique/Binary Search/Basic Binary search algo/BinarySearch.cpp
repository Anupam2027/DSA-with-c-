#include <iostream>

using namespace std;
//Binary search
int BinarySerach(int arr[],int n , int key)
{
  int start=0,end=n-1;
 
    while(start<=end)
    {
        //Find mid
      int mid=start+(end-start)/2;
      //arr[]==key
      if(arr[mid]==key)
      {
          return mid;
          
      }
      //arr[]<key
      else if(arr[mid]<key)
      {
          start=mid+1;
          
      }
      //arr[]>key
      else
      {
          end=mid-1;
      }
    } 
    return -1;
}
int main()
{
    int arr[1000],n,key;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the Elements of  the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Element which you want to search from the array:"<<endl;
    cin>>key;
    cout<<BinarySerach(arr,n,key);
    return 0;
}
