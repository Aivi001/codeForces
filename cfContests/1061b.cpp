#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m,x,i,mx=0,sum=0;
	cin>>n>>m;
	map<long long ,long long>mp;

	for(i=0;i<n;i++)
	{
		cin>>x;
		++mp[x];
		mx=max(mx,x);
		sum+=x;

	}
	if(mp[mx]+mp[1]==n&&mp[mx]<=mp[1])
	{
		cout<<max(0LL,(sum-max(n,mx)-1))<<"\n";
		return 0;
	}

	cout<<sum-max(n,mx)<<"\n";
	return 0;
}