//template by Aetius
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define rep(i,a,n) for(i=a;i<n;i++)
#define repe(i,a,n) for(i=a;i<=n;i++)
#define repn(i,a,n) for(i=n;i>a;i--)
typedef long long ll;

using namespace std;

int main()
{
	
	long long n,i,x,ans=0;
	vector<long long>v;

	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.pb(x);
	}

	sort(v.rbegin(),v.rend());

	for(i=0;i<n;i+=2)
	{
		ans+=abs(v[i]-v[i+1]);
	}

	cout<<ans<<"\n";
	return 0;
}