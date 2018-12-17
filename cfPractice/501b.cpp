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

//On My Own :)))
int main()
{
	
	map<string,string>m;
	vector<pair<string,string>> v;
	set<string>s;

	string x,y;
	int n,i;

	cin>>n;

	while(n--)
	{
		cin>>x>>y;
		m[x]=y;
		s.insert(y);

	}

	for(map<string,string>::iterator it=m.begin();it!=m.end();it++)
	{
		if(s.count(it->first))
			continue;

		string curr=it->first;

		while(m.count(curr))
		{
			curr=m[curr];
		}

		v.pb(mp(it->first,curr));

	}

	cout<<v.size()<<"\n";
	for(auto i:v)
		cout<<i.X<<" "<<i.Y<<"\n";

	return 0;
}


