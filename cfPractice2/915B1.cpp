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
pos=l;
cnt1=cnt1+abs(pos-l);
++cnt1;
}

if(r!=n)
{
pos=r;
cnt1=cnt1+abs(r-pos);
++cnt1;
}
cout<<"Left"<<cnt1<<"\n";
}

else if(abs(r-pos)<abs(l-pos) || abs(r-pos)==abs(l-pos))
{
  if(r!=n)
  {
  pos=r;
  cnt2=cnt2+abs(r-pos);
  ++cnt2;
  }
  if(l!=1)
  {
pos=l;
cnt2=cnt2+abs(pos-l);
++cnt2;
}
cout<<cnt2<<"\n";
}
//res=min(cnt1,cnt2);
//cout<<res<<"\n";

}
return 0;
}
