#include<bits/stdc++.h>
using namespace std;

int main()
{

	long long n,x,i,f=-3,cnt=0;

	string s="";

	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		s+=(x+'0');
	}

	while(1)
	{
		f=s.find("101",f+3);
		if(f!=string::npos)
			++cnt;
		else
			break;
	}
	cout<<cnt<<"\n";
}