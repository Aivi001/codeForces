#include<bits/stdc++.h>
using namespace std;


bool comp(const pair<pair<long long,long long>,long long>&a,const pair<pair<long long,long long>,long long>&b)
{
	return a.second<=b.second;
}


int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
	long long n,m,i,v=0,cost=0,x,y,z;
	cin>>n;
	//vector<long long>q;
	vector<bool>visit(n+1,false);
	for(i=0;i<n;i++){
		cin>>x;
		
	}
	cin>>m;
	vector<pair<pair<long long,long long>,long long>>appl;

	for(i=0;i<m;i++)
	{
		cin>>x>>y>>z;
		appl.push_back(make_pair(make_pair(x-1,y-1),z));
		//cin>>appl[i].first.first>>appl[i].first.second>>appl[i].second;
	}

	sort(appl.begin(),appl.end(),comp);

	/*for(i=0;i<m;i++)
	{
		cout<<appl[i].first.first<<" "<<appl[i].first.second<<" "<<appl[i].second<<"\n";
	}
	*/

	//if(m>n-2)
	//{
		for(i=0;i<m;i++)
		{
			
			if(!visit[appl[i].first.second])
					{cost+=appl[i].second;
						++v;
				visit[appl[i].first.second]=true;
				}
				

			}
	

	
		if(v==n-1)
		cout<<cost<<"\n";
		else
			cout<<"-1\n";
		//}
		//else
		//	cout<<"-1\n";
	
	//cout<<"here!\n";

	return 0;
}