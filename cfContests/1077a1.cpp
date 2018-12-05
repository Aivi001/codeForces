#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t,a,b,k;
	cin>>t;

	while(t--)
	{
		cin>>a>>b>>k;
		//cout<<ceil(k/2)<<" "<<floor(k/2)<<"\n";
		if(k%2)
		cout<<(k/2+1)*a-(k/2)*b<<"\n";
	else
		cout<<(k/2)*a-(k/2)*b<<"\n";
	}



	return 0;
}