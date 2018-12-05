#include<bits/stdc++.h>
using namespace std;

int main()
{
bool p1(0),p2(0),sp1(0),sp2(0),turn=0;
 int n,x(0),y(0);
cin>>n;
 while(n--)
 {
  cin>>x>>y;
  p1=x%2;
  p2=y%2;
  sp1^=p1;
  sp2^=p2;

  if(p1^p2)
  {
  turn=1;
  }
  }
  //cout<<p1<<p2<<endl;
  //cout<<sp1<<sp2<<turn;
  if(sp1==0&&sp2==0)
  cout<<"0\n";

  else if(sp1&&sp2&&turn)
  cout<<"1\n";
  else
  cout<<"-1\n";
  return 0;
 }

 //Found till odd number occurence...
