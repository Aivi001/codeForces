#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long i,n,x,mx=-1e2,c=0,curr,j;
	cin>>n;
	vector<long long>v;
	if(n==1)
	{
		cout<<"0\n";
		return 0;
	}
	v.push_back(0);
	for(i=1;i<=n;i++)
	{
		cin>>x;
		v.push_back(x);
	}

	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
			if(v[j]-v[i]==j-i)
				mx=max(mx,j-i-1);
		}
		}
		cout<<mx<<"\n";
/*
if(n==2)
{
	if(n==2&&v[2]==2||n==2&&v[1]==999)
	{
		cout<<"1\n";
		return 0;
	}

	else
		{cout<<"0\n";
	return 0;
}

}

	curr=v[1];
	for(i=2;i<=n;i++)
	{
		if(v[i]==curr+1)
		{
			++c;
		}
		else
		{
			//
			--c;
			mx=max(mx,c);
			c=0;
			curr=v[i];
		}


	}

*/
	return 0;
}