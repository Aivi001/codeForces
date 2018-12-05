#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long k2,k3,k5,k6,mn,mx;

	cin>>k2>>k3>>k5>>k6;

	mn=min(k2,min(k5,k6));
	k2-=mn;

	mx=min(k2,k3);

	cout<<mn*256+mx*32<<"\n";

	return 0;
}