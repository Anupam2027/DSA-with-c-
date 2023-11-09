#include<iostream>
using namespace std;
int main()
{
    int a[100][100],i,j,row,col;
    cout<<"Enter the no of row:";
    cin>>row;
    cout<<endl<<"Enter the no of colume:";
    cin>>col;
    cout<<endl<<"Enter the elements of  matrix:";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl<<"The elements  of the matrix are:"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    int b=0,sum1=0;

   
    for(i=0;i<row;i++)
    {
        int sum=0;
        for(j=0;j<col;j++)
        {
         sum+=a[i][j];
         
         if(sum>sum1)
         {
             sum1=sum;
            b=i; 
         }
         
        }
    }
    cout<<endl<<"Maximum sum of row index is:"<<b+1;
    
return 0;
    
}
