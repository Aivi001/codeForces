#include<bits/stdc++.h>
using namespace std;

vector<long long>res;
int rec(vector<string>&str)  //& necessary as you are manipulating the string 
{
	int cnt=0,req=0;  //don't forget to reinit req as 0 each time...
	long long i,j;
	for(i=0;i<str.size();i++)
	{

	if(str[i]=="table")
	{
		vector<string>y=str;

		for(j=0;j<=i;j++)
			y[i]="#";
		i=rec(y);
		
	}
	else if(str[i]=="/table")
	{
		res.push_back(req);
		return i;
	}

	else if(str[i]=="tr") cnt=0;
	else if (str[i]=="/tr") req+=cnt,cnt=0;
	else if (str[i]=="td") ++cnt; 
	}
	return 0;  //this is also req since reaching the end of a non-void ret f
}


int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	long long i;
	string s="";
	string c;
	vector<string>str;

	while(cin>>c) s+=c;

	for(i=0;i<s.length();i++)
		if(s[i]=='<'||s[i]=='>')
			s[i]=' ';

	stringstream ss(s);

	while(ss>>c) str.push_back(c);
	
	rec(str);

	sort(res.begin(),res.end());

	for(i=0;i<res.size();i++)
		cout<<res[i]<<" ";
	cout<<"\n";
	return 0;
}
/*
int main()
{
	string s="";char c;
	int pos=-1;

	while(cin>>c)
	{
		s+=c;

	}

	sort(s.begin(),s.end());

	cout<<"val after sort"<<s<<"\n";


	return 0;
}
*/