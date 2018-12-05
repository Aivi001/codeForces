#include<iostream>
#include<vector>
#include<algorithm>
#define REP(i,n) for(int i=0;i<n;i++)
#define REPr(i,n) for(int i=n-1;i>=0;i--)
using namespace std;

int main()
{
int i,n,k,val,ans,t;
vector<int>v;
cin>>n>>k;


REP(i,n)
//for(int i=0;i<n;i++)
{
cin>>val;
v.push_back(val);
}
//sort(arr,arr+n);
sort(v.begin(),v.end());

REPr(i,n)
//for(int i=v.size()-1;i>=0;i--)
{
  //cout<<v[i]<<"\t";
  t=v[i];
  if(v[i]!=0)
  {
if(k % v[i] == 0)
{
ans=k/v[i];
break;}
else
continue;
}
else
break;
}

cout<<ans<<"\n";
return 0;
}
