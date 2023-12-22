#include <iostream>

using namespace std;
void table(int n,int i)
{
    int sum;
    if(i==10)
    {
        cout<<n<<"*"<<i<<"="<<n*i;
        return;
        
    }
    sum=n*i;
    cout<<n<<"*"<<i<<"="<<sum<<endl;
    table(n,i+1);
    
}
int main()
{
    int n,i=1;
    cout<<"enter the number which you want!!";
    cin>>n;
    table(n,i);

    return 0;
}