#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main()
{
	int i,j,n,x,z=0,ans=1;
	vector<int>vec;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		vec.pb(x);
	}


	for(i=0;i<n;i++) 
		{if(vec[i]==0)
			continue;
			else
				break;
		}
		if(i==n)
		{
			cout<<"0\n";
			return 0;
		}

	for(j=i+1;j<n;j++)
	{
		if(vec[j]==0)
			++z;
		else
		{
			z>0?ans+=2:++ans;
			//cout<<ans<<"\n";
			z=0;
		}
		//cout<<"val of z "<<z<<"\n";
	}
	cout<<ans<<"\n";


	return 0;
}