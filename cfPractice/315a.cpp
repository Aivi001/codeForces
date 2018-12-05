#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,x,y,i,cnt=0;
	map<long long,long long>m;


	cin>>n;
	vector<long long>a(n),b(n);

	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		m[b[i]]++;
	}

	for(i=0;i<n;i++)
	{
		--m[b[i]];
		if(m[a[i]]==0)
		{
			++cnt;
		}
		++m[b[i]];
	}

	cout<<cnt<<"\n";
	return 0;
}