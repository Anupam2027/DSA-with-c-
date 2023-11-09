#include <iostream>

using namespace std;
void printcol(int arr[][3],int row,int col)
{
    //column wise
    cout<<endl<<"Print element colume wise"<<endl;
     for(int j=0;j<col;j++)
    for(int i=0;i<row;i++)
    cout<<arr[i][j]<<" ";
    
}
int search(int arr[][3], int row,int col,int x)
{
  for(int i=0;i<row;i++)
    {
    for(int j=0;j<col;j++)
    {
        if(arr[i][j]==x)
       { cout<<"yes";
        return 0;
        break;
       }
    }
    }
    cout<<"No"; 
return 0;
}
int main()
{
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
  //  print all array value row wise
   cout<<"Print element row wise"<<endl;
   for(int i=0;i<4;i++)
   for(int j=0;j<3;j++)
   cout<<arr[i][j]<<" ";
   // print all array value col wise function call
   
   printcol(arr,4,3); 
  int x=90;
   
  // find an element in our array
   cout<<endl<<"Element found or not?"<<endl;
   search(arr,3,4,x);
   
   
  return 0;
}
