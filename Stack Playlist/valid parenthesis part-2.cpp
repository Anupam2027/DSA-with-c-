#include <iostream>
#include<stack>
using namespace std;

bool check(string str)
{
    int left=0;
    for(int i=0;i<str.size();i++)
    {
        //opening
        if(str[i]=='(')
        left++;
        //closing
        else
        {
            if(left==0)
            return 0;
            else
            left++;
        }
    }
    return left==0;
}
int main()
{
    string str="((()))())";
    cout<<check(str)<<endl;
    return 0;
}