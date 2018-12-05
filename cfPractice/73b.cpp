#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<string,long long>&a,const pair<string,long long>&b)
{
	if(a.second==b.second)
		return a.first<b.first;
	else
		return a.second>b.second;
}


int main()
{

	long long n,m,i,j,hi,lo,pos;
	string s;
	cin>>n;
	vector<pair<string,long long>>p(n),q(n);
	for(i=0;i<n;i++)
		cin>>p[i].first>>p[i].second;
	q=p;

	cin>>m;
	vector<long long>b(m);
	for(i=0;i<m;i++)
		cin>>b[i];

	cin>>s;



if(b.size())
{
	sort(b.begin(),b.end());
	sort(p.rbegin(),p.rend());
	sort(q.rbegin))
	for(i=0;i<n;i++)
	{

		if(p[i].first==s)
			p[i].second+=b[b.size()-1];
	
	}

	
	for(j=0,pos=0;j<n,pos<m-1;j++)
	{
		if(j!=i){
			p[j].second+=b[pos];
			++pos;
		}

	}


	if(m==n)
	{
		
			q[i].second+=b[0];

		for(j=0,pos=1;j<n,pos<m;j++)
	{
		if(j!=i){
			p[j].second+=b[pos];
			++pos;
		}

	}

	}

}

sort(p.begin(),p.end(),cmp);
sort(q.begin(),q.end(),cmp);



for(i=0;i<n;i++)
	{
		if(p[i].first==s)
			hi=i+1;
		if(q[i].first==s)
			lo=i+1;
	}
	cout<<hi<<" "<<lo<<"\n";
	return 0;
}