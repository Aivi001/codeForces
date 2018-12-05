#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long n,s,i;
	cin>>n>>s;
	vector<long long>a(n),b(n);

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for (i = 0; i < n; ++i)
	{
		cin>>b[i];
		/* code */
	}

	if(a[0]!=0)
	{
		if(a[s-1]==1)
		{
			cout<<"YES\n";
			return 0;
		}
		else if(b[s-1]==1)
		{
			for(i=s;i<n;i++)
			{
				if(a[i]==1&&b[i]==1)
				{
					cout<<"YES\n";
					return 0;
				}

				else
					continue;

			}
			if(i==n)
			{
				cout<<"NO\n";
				return 0;
			}

		}

		else
		{
			cout<<"NO\n";
			return 0;
		}

	}

	else
	{
		cout<<"NO\n";
		return 0;
	}




	return 0;
}