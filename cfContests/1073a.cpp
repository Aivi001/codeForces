#include<bits/stdc++.h>
using namespace std;
bool div(string s)
{

	map<char,int>m;
	int flag=0;
	int n=s.length(),val=n/2,i;
	for(i=0;i<n;i++)

	{
		++m[s[i]];
		if(m[s[i]]>val)
		{
			flag=1;
			break;
		}
	}
	return flag==1?false:true;

}

int  main()
{
	long long i,j,n;string s,s1;
	int exist=0;
	cin>>n>>s;

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			 s1=s.substr(i,j+1);
			if(div(s1))
			{
				exist=1;
				break;
			}
		}
		if(exist==1)
			break;
	}
		
		if(exist==1)
			cout<<"YES\n"<<s1<<"\n";
		else
			cout<<"NO\n";



	return 0;
}