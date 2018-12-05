#include<iostream>

using namespace std;

int main()
{
long long n,a,b,temp,frames=0;
cin>>n>>a>>b;
temp=n-b;
//if(temp>=
if(temp>=2*a)
{
frames=2;
frames*=2;
}

else
{
++frames;
if(n>=2*a)
frames++;
else
{
frames+=2;
frames*=2;
}
}
cout<<frames<<"\n";
return 0;
}

