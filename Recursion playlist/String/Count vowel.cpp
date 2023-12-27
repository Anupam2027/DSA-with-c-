#include <iostream>

using namespace std;
int count(string str,int index)
{
    //base condition
    if(index==-1)
    return 0;
    //hoga
    if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')
    return 1+count(str,index-1);
    //nahi hoga
    else
    return count(str,index-1);
}
int main()
{
    string str;
    
    cout<<"Enter any string:";
    cin>>str;
    int n=str.size();
    
    int r=count(str,n-1);
    
    cout<<"Total no of vowel in this string is:"<<r;
    return 0;
}