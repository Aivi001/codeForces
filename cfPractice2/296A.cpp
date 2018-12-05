#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,x,cnt=0;
vector<int>v,v1;
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>x;
  v.push_back(x);
  //v1.push_back(x);
}
sort(v.begin(),v.end());
//sort(v1.begin(),v1.end());
v1=v;
v.erase( unique( v.begin(),v.end() ) ,v.end());
//for(u:v)
//cout<<u;
//cout<<endl;
for(auto k:v)
{
  int num=count(v1.begin(),v1.end(),k);
if(num>=cnt)
cnt=num;
  }
  /*cout<<cnt<<endl;
  cout<<(n+1)/2<<endl;
  cout<<(cnt<=(n+1/2));*/
cout<<(cnt<=((n+1)/2)?"YES\n":"NO\n");

return 0;

}
