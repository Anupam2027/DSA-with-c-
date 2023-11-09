#include <iostream>

using namespace std;

int main()
{
    string s ="1.1.1.1",ans;
    int i,size=s.size();
    for(i=0;i<size;i++)
    {
        if(s[i]=='.')
        {
            ans=ans+"[.]";
        }
        else
        ans=ans+s[i];
    }
    for(i=0;i<100;i++)
    {
      cout<<ans[i];
      if(ans[i]=='\0')
      break;
    }
    
    

    return 0;
}
