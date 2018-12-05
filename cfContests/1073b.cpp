#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long i,n,x,need,currpos,pos=0,p;
	vector<long long>v,v2;
	map<long long , long long>m;
	//std::vector<long long>::iterator it;

	cin>>n;

	for(i=0;i<n;i++)
	{
		cin>>x;
		m[x]=i+1;
	}

	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
		
	}

	for(i=0;i<n;i++)
	{
		p=m[v[i]];
		
		if(p<=pos)
			//v2.push_back(0);
			cout<<"0 ";
		else{
			//v2.push_back(p-pos);
			cout<<p-pos<<" ";
			pos=p;
		}


	}
	cout<<"\n";



}