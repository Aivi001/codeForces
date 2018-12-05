#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k,i,cnt=0,start=0;
	string s;
	cin>>k>>s;
	vector<int>p(s.length());
	vector<string>st;

	p[0]=0;
	for(i=1;i<s.length();i++)
	{
		if(s[i]!=s[i-1])
			{p[i]=1;
				++cnt;}
		else
			p[i]=0;
	}

	//for(i=0;i<s.length();i++)
	//	cout<<p[i]<<" ";
	//cout<<"\n";

	if((k<=(cnt+1)) ||(cnt==s.length()&&k<=cnt))
	{
		for(i=0;i<=s.length();i++)
		{
			if(k==1)
			{
				//cout<<"here";
				st.push_back(s.substr(start,s.length()-start));
				//cout<<"last value of start "<<start<<" of kth "<<s.substr(start,s.length()-start)<<"\n";
				break;
			}
			if(p[i]==1)
			{
				st.push_back(s.substr(start,i-start));
				start=i;
				--k;
				//cout<<"k val "<<k<<"\n";
			}
			//cout<<"out";

		}
	}

	else
	{
		cout<<"NO\n";
		return 0;
	}
	//cout<<"YES\n";
	set<char>se;
	for(auto sit:st)
	{	
		if(se.find(sit[0])!=se.end())
		{
			cout<<"NO\n";
			return 0;
		}
		else
			se.insert(sit[0]);
		//cout<<sit<<"\n";
	}
	cout<<"YES\n";
	for(auto sit:st)
		cout<<sit<<"\n";	


	return 0;
}