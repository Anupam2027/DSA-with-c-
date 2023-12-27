using namespace std;
bool checkpal(string str,int start,int end)
{
    //base condition
    if(start>=end)
    return 1;
    //not match
    if(str[start]!=str[end])
    return 0;
    //matched
    return checkpal(str,start+1,end-1);
}
int main()
{
    string str;
    
    cout<<"Enter any string:";
    cin>>str;
    int n=str.size();
    //check palindrome
    int r=checkpal(str,0,n-1);
    if(r==0)
    cout<<"This is not palindrome!!";
    else
    cout<<"This string is palindrome";
    

    return 0;
}