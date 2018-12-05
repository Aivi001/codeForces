#include<iostream>
#include<vector>
#include<algorithm>
#define REP for(int i = 0 ;i < n ; i++)
using namespace std;

int main()
{
int n,pos,l,r,cnt1=0,cnt2=0,pos2,res;
cin>>n>>pos>>l>>r;
pos2=pos;
if((r-l+1)==n)
cout<<"0\n";
else
{
if(abs(l-pos)<abs(r-pos))
{
  if(l!=1)
  {
while(pos!=l)
{--pos;
  ++cnt1;
}
++cnt1;
}
if(r!=n)
{
while(pos!=r)
{
  ++pos;
  ++cnt1;
}
++cnt1;
}
cout<<cnt1<<"\n";
}
else if(abs(r-pos)<abs(l-pos))
{
  if(r!=n)
  {
  while(pos2!=r)
  {++pos2;
    ++cnt2;
  }
  ++cnt2;
}
  if(l!=1)
  {
  while(pos2!=l)
  {
    --pos2;
    ++cnt2;
  }
  ++cnt2;
}
cout<<cnt2<<"\n";
}
//res=min(cnt1,cnt2);
//cout<<res<<"\n";
}
return 0;
}
