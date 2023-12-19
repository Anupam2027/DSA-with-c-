#include <iostream>

using namespace std;

int main()
{
    int arr[5]={7 ,5,2,6,3};
    int *ptr=arr;
    //print the address of first element or 0th index
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;
     //print the address of second element or 1st index

    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;
    cout<<ptr+1<<endl;
    //print the value of all elements
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=0;i<5;i++)
    cout<<*(arr+i)<<" ";
    cout<<endl;
    for(int i=0;i<5;i++)
    cout<<i[arr]<<" ";
    cout<<endl;
    for(int i=0;i<5;i++)
    cout<<*(ptr+i)<<" ";
    cout<<endl;
    for(int i=0;i<5;i++)
    cout<<ptr[i]<<" ";
    
    //print the value first element or 0th index
    cout<<endl<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<arr[0]<<endl;
    cout<<*ptr<<endl;
    //print the address of all elements
    for(int i=0;i<5;i++)
    cout<<&arr[i]<<" ";
    cout<<endl;
    for(int i=0;i<5;i++)
    cout<<(arr+i)<<" ";
    cout<<endl;
    for(int i=0;i<5;i++)
    cout<<ptr+i<<" ";
//artithmetric operation 
//print array elements
     cout<<endl;
    for(int i=0;i<5;i++)
    {
     cout<<*ptr<<" "<<endl;
     ptr++;
    }
    for(int i=0;i<8;i++)
    {
     cout<<*ptr<<" "<<endl;
     ptr++;
    }
    //p--
    int *ptr1=arr+5;
     for(int i=5;i>=0;i--)
    {
     cout<<*ptr1<<" "<<endl;
     ptr1--;
    }
    //not in range
     for(int i=5;i>=-5;i--)
    {
     cout<<*ptr1<<" "<<endl;
     ptr1--;
    }
    //addition
    ptr1=ptr1+4;
    cout<<*ptr1<<endl;
    ptr1=ptr1-2;
    cout<<*ptr1<<endl;
    return 0;
}
