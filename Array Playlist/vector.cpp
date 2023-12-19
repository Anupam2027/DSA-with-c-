#include <iostream>
#include<vector>
using namespace std;

int main()
{
  //create vector and declear
  vector<int>v;
  vector<int>v1(5,1);
  //size and capacity
  cout<<"size of vector:"<<v.size()<<endl;
  cout<<"Capacity of vector:"<<v.capacity()<<endl;
  v.push_back(2);
  v.push_back(4);
  v.push_back(10);
  cout<<"size of vector:"<<v.size()<<endl;
  cout<<"Capacity of vector:"<<v.capacity()<<endl;
  //update value
  v[2]=4;
  cout<<"size of vector:"<<v1.size()<<endl;
  cout<<"Capacity of vector:"<<v1.capacity()<<endl;
  v1.push_back(7);
  cout<<"size of vector:"<<v1.size()<<endl;
  cout<<"Capacity of vector:"<<v1.capacity()<<endl;
  vector<int>v3={4,6,5,7,8,2,0};
  //Delete value from vector
  vector<int>v2;
      v2.push_back(20);
      v2.push_back(22);
      v2.push_back(23);
      v2.push_back(24);
      v2.push_back(25);
      v2.push_back(23);
      v2.pop_back();
     cout<<"size of vector:"<<v2.size()<<endl;
  cout<<"Capacity of vector:"<<v2.capacity()<<endl; 
  v2.erase(v2.begin()+1);
  cout<<"size of vector:"<<v2.size()<<endl;
  cout<<"Capacity of vector:"<<v2.capacity()<<endl;
  for(int i=0;i<v2.size();i++)
  cout<<v2[i]<<" ";
  v2.insert(v2.begin()+1,22); //insert value
  cout<<endl;
  for(int i=0;i<v2.size();i++)
  cout<<v2[i]<<" ";
  //update value
  v2[3]=30;
  cout<<endl;
  for(int i=0;i<v2.size();i++)
  cout<<v2[i]<<" ";
  //delete all value from the vector
  v2.clear();
  cout<<endl;
  cout<<"size of vector:"<<v2.size()<<endl;
  cout<<"Capacity of vector:"<<v2.capacity()<<endl;
  vector<int>a;
  a.push_back(12);
  a.push_back(112);
  a.push_back(21);
  a.push_back(12);
  a.push_back(42);
  a.push_back(52);
  a.push_back(27);
  cout<<a[0]<<endl;
  cout<<a[a.size()-1]<<endl;
  cout<<a.front()<<endl;
  cout<<a.back()<<endl;
  vector<int>b;
  //copy value of 1 vector to another
  b=a;
  cout<<b.size();
  cout<<endl;
  for(auto it=a.begin();it!=a.end();it++)
  cout<<*it<<" ";
  cout<<endl;
  for(auto i:a)
  cout<<i<<" ";
   vector<int>ans;
   ans.push_back(5);
   ans.push_back(50);
   ans.push_back(51);
   ans.push_back(52);
   ans.push_back(53);
   ans.push_back(54);
   ans.push_back(55);
   //sort in increasing order
   
   sort(ans.begin(),ans.end());
   for(int i=0;i<ans.size();i++)
   cout<<ans[i]<<" ";
   

    return 0;
}
