#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,s,i;
	cin>>n>>s;

	i=s%n;
if(i==0)
	cout<<s/n<<"\n";
else
	cout<<s/n+1<<"\n";
return 0;
}