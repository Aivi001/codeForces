#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,k,p=0,ans=0;
	cin>>n>>k;

	if(k==1)
	{
		cout<<n<<"\n";
		return 0;
	}
	
	//	buggy: n>=, then takes the higher power and gives the ans, if = takes that pow n not the next
	while(n>pow(2,p))
	{
		++p;
	}
	if(n==pow(2,p))
	{
		ans=pow(2,p+1);
		cout<<ans-1<<"\n";
		return 0;

	}
	 ans=pow(2,p);

	cout<<ans-1<<"\n";
	

	return 0;
}