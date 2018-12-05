#include<bits/stdc++.h>
using namespace std;

int main()
{
	int p,o,s,n,x,t,flag=0;
	cin>>n;
	p=1;o=2;s=3;

	while(n--)
	{
		cin>>x;
		if(x==p||x==o)
		{
			if(x==p)
			{
				t=o;
				o=s;
				s=t;
			}
			else
			{
				t=p;
				p=s;
				s=t;
			}

		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"NO\n";
	else
		cout<<"YES\n";

	return 0;
}