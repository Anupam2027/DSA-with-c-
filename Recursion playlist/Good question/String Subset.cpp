#include <iostream>
#include<vector>
using namespace std;
void subsequence(string &s,int index,int n,vector<string>&ans,string &temp)
{
    if(index==n)
    {
        ans.push_back(temp);
        return;
    }
    //Not includede
     subsequence(s,index+1,n,ans,temp);
     //includede
     temp.push_back(s[index]);
     subsequence(s,index+1,n,ans,temp);
     temp.pop_back();
}
int main()
{
    string s="abcd";
    vector<string>ans;
    string temp;
    subsequence(s,0,s.size(),ans,temp);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}