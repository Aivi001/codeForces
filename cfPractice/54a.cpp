#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,k,c,ans=0,x;
	cin>>n>>k>>c;
ans+=n/k;

	while(c--)
	{
		cin>>x;
		if(__gcd(x,k)>1)
			--ans;
		
	}

	return 0;
}