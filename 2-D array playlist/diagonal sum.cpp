#include<iostream>
using namespace std;
int main()
{
    int a[100][100],i,j,row,col;
    int sum=0,sum1=0;
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
    cout<<endl<<"The elements  of the matrix are:";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
  //first diagonal
  i=0;
  while(i<row)
  {
      sum+=a[i][i];
      i++;
  }
//second diagonal
i=0,j=col-1;
while(j>=0)
{
    sum1+=a[i][j];
    i++;
    j--;
}
cout<<sum<<" "<<sum1<<" ";
    
return 0;
    
}