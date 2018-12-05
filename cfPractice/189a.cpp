#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,a,b,c,i,j,k,m=0;
	cin>>n>>a>>b>>c;

	for(i=0;i*a<=n;i++)
	{
		for(j=0;i*a+j*b<=n;j++)
		{
			k=(n-(i*a+j*b))/c;
			if((i*a+j*b+k*c)==n)
				m=max(i+j+k,m);
		}
	}
	cout<<m<<"\n";


	return 0;
}