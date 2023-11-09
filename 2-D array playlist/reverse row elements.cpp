#include <iostream>

using namespace std;

int main()
{
    int i,j,row,col,arr[100][100];
    cout<<"Enter no of row:";
    cin>>row;
    cout<<"Enter no of column:";
    cin>>col;
    cout<<"Enter elements of the array :";
    for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++) 
     {
         cin>>arr[i][j];
     }
    }
    cout<<"The array  of elements are before reverse:";
    for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++) 
     {
         cout<<arr[i][j]<<" ";
     }
    }
    //reverse each row elements
    for(int k=0;k<row;k++)
    {
        i=0,j=col-1;
        while(i<j)
        {
            swap(arr[k][i],arr[k][j]);
            i++;
            j--;
        }
    }
    cout<<endl<<"The reverse each row elements are :";
    for(i=0;i<row;i++)
    {
     for(j=0;j<col;j++) 
     {
         cout<<arr[i][j]<<" ";
     }
    }
    return 0;
}