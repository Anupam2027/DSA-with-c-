#include <iostream>

using namespace std;
void lowerToupper(string &str,int index)
{
    //base condition
    if(index==-1)
    return ;
    str[index]='A'+str[index]-'a';
    lowerToupper(str, index-1);
    
}
int main()
{
    string str;
    
    cout<<"Enter any string:";
    cin>>str;
    int n=str.size();
    lowerToupper(str,n-1);
    cout<<"Uppercase string is:"<<str;
    
    

    return 0;
}
