#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	int n,m,k,i,j,x,y,f=0;
	string s,ch;
	map<string,pair<int,int>>d;
	cin>>n>>m>>k;
	int grid[35][35]={0};
	//vector<vector<long long>>grid(n,vector<long long>(m,0));

	/*for(i=0;i<n;i++)
		{for(j=0;j<m;j++)
			cout<<grid[i][j]<<" ";
			cout<<"\n";
		}
	*/

	while(k--)
	{
		cin>>ch;

		if(ch[0]=='+')
		{
			f=0;
			cin>>x>>y>>s;
			if(grid[x-1][y-1]==0){
				grid[x-1][y-1]=1;
				d[s]=make_pair(x-1,y-1);
			}
			else
			{
				for(j=y;j<m;j++)
				{
					//cout<<"in only j loop\n";
					if(grid[x-1][j]==0)
					{
						grid[x-1][j]=1;
						d[s]=make_pair(x-1,j);
						//cout<<"found in only j loop "<<x<<" "<<j+1<<"\n";
						break;
					}
				}

				if(j==m)
				{
					//cout<<"in ij loop ";
					for(i=x;i<n;i++)
					{
						for(j=0;j<m;j++)
						{
							if(grid[i][j]==0)
							{
								grid[i][j]=1;
								d[s]=make_pair(i,j);
								//cout<<"found in ij loop "<<i+1<<" "<<j+1<<"\n";
								f=1;
								break;
							}
							if(f) break;
						}
					}
					if(f==0){
						d[s]=make_pair(-2,-2);
						//cout<<"NOpe\n";
					}
				}
			}
			//cout<<s<<"-  "<<d[s].first+1<<" "<<d[s].second+1<<"\n";

			/*for(i=0;i<n;i++)
		{for(j=0;j<m;j++)
			cout<<grid[i][j]<<" ";
			cout<<"\n";
		}*/
		}

		else
		{
			cin>>s;
			if(d.find(s)!=d.end())
				{cout<<d[s].first+1<<" "<<d[s].second+1<<"\n";
				grid[d[s].first][d[s].second]=0;
				d.erase(d.find(s));
				}
				else
					cout<<"-1 -1\n";
		}
	}



	return 0;
}