#include <iostream>

using namespace std;
void rev(string &str,int start,int end)
{
    //base condition
    if(start>=end)
    return ;
    char c=str[start];
    str[start]=str[end];
    str[end]=c;
    rev(str,start+1,end-1);
    
}
int main()
{
    string str;
    
    cout<<"Enter any string:";
    cin>>str;
    int n=str.size();
    rev(str,0,n-1);
    cout<<"Reverse string is:"<<str;
    
    

    return 0;
}
