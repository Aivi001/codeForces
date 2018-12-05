#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t,n,l,r,i;

	cin>>t;

	while(t--)
	{
		cin>>n>>l>>r;

		i=n/l;
		if(i*r>=n)
			cout<<"Yes\n";
		else
			cout<<"No\n";
		/*
			DUDE!!! IT'S DEFN. TLE !!!!
		for(i=l;i<=r;i++)
		{
			if(n%i==0)
			{
				cout<<"Yes\n";
				n=0;
				break;
			}

			else if(n%i>=l&&n%i<=r)
			{
				cout<<"Yes\n";
				n=0;
				break;
			}
		}
		if(n)
			cout<<"No\n";
			*/
	}
	return 0;
}