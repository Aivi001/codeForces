#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a,b,c,l;
	cin>>a>>b>>c;

	l=(a*b)/__gcd(a,b);
	cout<<c/l<<"\n";

	return 0;
}