#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n,k,tap[200];
bool cond[200];
memset(cond,false,sizeof(cond));
cin>>t;
while(t--)
{
 cin>>n>>k;
 int p=n;
 for(int j=0;j<k;j++)
 cin>>tap[j];

int b=0, i=0;
while(p!=0)
{
for(int j=0;j<k;j++)
{
  //if(n==b)
  //break;
  //else
//  {
if(j=0)
{
 if(j >=0 && j<n && !cond[j])
 {cond[j]=true;
  ++i;
  ++b;
  --p;
  if(n==b)
  break;
  }
}
else
{
  ++i;
if(j-i >=0 && j-i<n && !cond[j-1])
{cond[j-1]=true; ++b; --p;  if(n==b)
  break;}

if(j+i >=0 && j+i<n && !cond[j+1])
{cond[j+1]=true; ++b; --p;   if(n==b)
  break;}
}

}

}
cout<<i<<'\n';
}
return 0;
}
