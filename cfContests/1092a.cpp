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
	
	long long t,n,k,i,rem,q;
	cin>>t;

	while(t--)
	{
		cin>>n>>k;

		string s="",str="";

		for(i=0;i<k;i++)
			s+=(char)('a'+i);
		//cout<<s<<"\n";

		q=n/k;
		
		str=s;
		for(i=1;i<n/k;i++)
			str+=s;

		rem=n%k;
		
		for(i=0;i<rem;i++)
			str+=s[i];

		cout<<str<<"\n";
		//cout<<"q "<<q<<"\n";
		//cout<<"n/k "<<n/k<<"\n";
		//cout<<"rem "<<rem<<"\n";


	}
	return 0;
}