#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
	long long n,i,x,sum=0,mx;
	vector<long long>v1,v2,v;
	map<long long,long long>m;

	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		v1.push_back(x);
		sum+=x;
		m[x]++;
	}

	v2=v1;

	sort(v2.rbegin(),v2.rend());
	v2.erase(unique(v2.begin(),v2.end()),v2.end());

	

	for(i=0;i<n;i++)
	{
		//mx=5;

		if(v1[i]!=v2[0]||v1[i]==v2[0]&&m[v1[i]]>1)
			mx=v2[0];
		else
			mx=v2[1];
	
	//cout<<mx<<"\n";
		if((sum-v1[i]-2*mx)==0)
			{v.push_back(i+1);
				//<<"AC";
			}
	}

	cout<<v.size()<<"\n";
	if(v.size()){
	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";
		cout<<"\n";
	}

	//for(i=0;i<v2.size();i++)
	//	cout<<v2[i]<<" ";
	//cout<<"\n";



	return 0;
}