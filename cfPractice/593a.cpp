#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<char,int>&a,pair<char,int>&b)
{
	return a.second>=b.second;
}
int main()
{
	vector<string>v;
	map<char,int>alp;
	string s;
	char s1,s2;
	long long n,i,j,k,mx=0,cnt=0,tot=0,f1,f2,f3;
	cin>>n;

	while(n--)
	{
		set<char>st;
		cin>>s;
		for(i=0;i<s.length();i++)
			st.insert(s[i]);
		if(st.size()<3)
			v.push_back(s);

	}
	//cout<<"val of v[i]'s";
	//for(i=0;i<v.size();i++)
	//	cout<<v[i]<<"\n";

	if(v.size()>0)
	{
	for(i=0;i<v.size();i++)
	{
		string t=v[i];

		for(j=0;j<t.length();j++)
		{
			++alp[t[j]];    //did -'0' by mistake, that'll convert it to int 
			/*if(alp[t[j]]>=mx)
				{s2=s1;
				s1=t[j];
				mx=alp[t[j]];
			}*/ //won't work at all times, has buggy corner cases, eg: first element is itself the largest


		}
	}

	vector<pair<char,int>>vec(alp.begin(),alp.end());
	sort(vec.begin(),vec.end(),cmp);

	/*if(vec.size()<2)
	{
		s1=(char)vec[0].first;
		s2=(char)vec[0].first;
	}

	else
	{
		s1=(char)vec[0].first;
		s2=(char)vec[1].first;
	}*/

//cout<<"vec[0] "<<vec[0].first<<" vec[1] "<<vec[1].first<<"\n";
//cout<<"s1 and s2 are "<<s1<<" "<<s2<<"\n";
	
		for(j=0;j<vec.size();j++)
		{
			for(k=j+1;k<vec.size();k++)
			{
				s1=vec[k].first;s2=vec[j].first;
				//if(j!=k)
				for(i=0;i<v.size();i++)
		{
		string t=v[i];
		int l=t.length();
		cout<<"\n\nlength of "<<t<<" is "<<l<<"\n";
		cout<<"s1 and s2 "<<s1<<" "<<s2<<endl<<"\n";
		if(count(t.begin(),t.end(),s1)==l)
		f1=1;
	if(count(t.begin(),t.end(),s2)==l)
		f2=1;
	if(count(t.begin(),t.end(),s1)+count(t.begin(),t.end(),s2)==l)
		f3=1;
				if(f1||f2||f3)
			{	
				//cout<<count(t.begin(),t.end(),s1)<<" "<<count(t.begin(),t.end(),s2)==l<<" count f\n";
				cout<<"l is "<<l<<"\n";
				cnt+=l;
			}
				cout<<"cnt is "<<cnt<<endl;
				f1=0;f2=0;f3=0;
			}
			cout<<"count now "<<cnt<<"\n";
			tot=max(tot,cnt);
			cnt=0;
		}
		//if(count(t.begin(),t.end(),s1)==l||count(t.begin(),t.end(),s2)==l||(count(t.begin(),t.end(),s2)+count(t.begin(),t.end(),s1)==l))  //not essentially optimal at all times eg: fails testCase:10
		//	cnt+=l;
	}

cout<<"tot is "<<tot<<endl;

}
else
cout<<"0\n";

	return 0;
}