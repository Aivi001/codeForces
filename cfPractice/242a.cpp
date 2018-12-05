#include<bits/stdc++.h>
using namespace std;

bool com(pair<int,int>&a,pair<int,int>&b)
{
	if(a.first<b.first)
		return true;
	else if(a.first==b.first)
		return a.second<b.second;
	else
		return false;
}
int main()
{
	//set<string>s;
	vector<pair<int,int>>::iterator it;
	std::vector<pair<int,int>> v;
	int x,y,a,b,i,j;
	string st;
	cin>>x>>y>>a>>b;

	for(i=b;i<=y;i++)
	{
		for(j=a;j<=x;j++)
		{
			if(j>i)
			{
				v.push_back(make_pair(j,i));
				//st="";
				//st=to_string(j);
				//st+=" ";
				//st+=to_string(i);
				//cout<<"string val "<<st<<"\n";
				//s.insert(st);
			}
		}
	}

	cout<<v.size()<<"\n";
	sort(v.begin(),v.end(),com);
	for(i=0;i!=v.size();i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<"\n";
	}


	return 0;
}