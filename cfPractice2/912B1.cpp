#include<iostream>
using namespace std;

int main()
{
long long n,k,i,result=1;
cin>>n>>k;
if(k==1)
cout<<n<<"\n";
else
{
while(result<n)
{
result*=2;
++result;
}
cout<<result<<"\n";
}
return 0;
}
