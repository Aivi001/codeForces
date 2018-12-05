#include<bits/stdc++.h>
using namespace std;
#define  ll long long
int main()
{
ll n,zl=0,zr=0,ol=0,ori=0;
int l,r;
cin>>n;
while(n--)
{
cin>>l;
if(l==0)
 ++zl;
 else
  ++ol;
cin>>r;
if(r==0)
 ++zr;
 else
  ++ori;
}
cout<<(min(zl,ol)+min(zr,ori))<<"\n";
return 0;
}
