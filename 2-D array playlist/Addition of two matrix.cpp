#include<iostream>
using namespace std;
int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,n,row,col;
    cout<<"Enter the no of row:";
    cin>>row;
    cout<<endl<<"Enter the no of colume:";
    cin>>col;
    cout<<endl<<"Enter the elemenr of first matrix:";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl<<"The elements  of the first matrix are:"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }

    cout<<endl<<"Enter the elements of second matrix:";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<endl<<"The elements  of the second matrix are:"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<b[i][j]<<" ";
        }
    }
   
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<endl<<"The addition  of the two matrix are:"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<c[i][j]<<" ";
        }
    }
return 0;
    
}
