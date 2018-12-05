#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
float a,b,n,x=1,res;
cin>>n>>a>>b;

for(int i=1;i<n;i++)
{
res=min(floor(a/i),floor(b/(n-i)));
x=max(x,res);
}
cout<<x<<"\n";
return 0;
}
