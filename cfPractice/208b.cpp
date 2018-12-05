#include<bits/stdc++.h>
using namespace std;
map<vector<string>,int>w;
string ans="NO\n";
	void f(vector<string>&v)                //recursive approach does backtracking, whereas iterative(earlier soln) doesn't ...hint from "subscriber"
	{
		//cout<<"i is "<<i<<"\n";
		if(w[v])
			return;  //not ret false
		w[v]=1;
		int i=v.size();
		if(i==1)
			ans="YES\n";
		
				else
		{
			
			 if(i>1&&(v[i-1][0]==v[i][0]||v[i-1][1]==v[i][1])){
				//cout<<"Prev "<<v[i-1];
				vector<string>b=v;
				b[i-1]=b[i];
				b.erase(b.end()-1);
				f(b);
				//cout<<"val of v[i] "<<v[i]<<" then, "<<v[i-1]<<"\n";	
			}
			/*else*/ if(i>3&&(v[i-3][0]==v[i][0]||v[i-3][1]==v[i][1])){
				//cout<<"Prev "<<v[i-3];
			vector<string>b;
			b=v;
				b[i-3]=b[i];
				b.erase(b.end()-1);
				f(b);
				//cout<<" val of v[i] "<<v[i]<<" then, "<<v[i-3]<<"\n";
			}

			/*else
			{
				cout<<"NO\n";
				return 0;
			}*/
		}
	}
	


int main()
{
	int n;
	cin>>n;
	vector<string>v(n+1);
	//v[0]=v[1]=v[2]="00";
	for(int i=0;i<n;i++)
		{cin>>v[/*3+*/i];
		//	cout<<v[3+i]<<" ";
		}
		//cout<<"\n";
	f(v);
	cout<<ans;
	return 0;
}