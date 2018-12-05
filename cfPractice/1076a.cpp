#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	string s;

	cin>>n>>s;
	//cout<<*max_element(s.begin(),s.end())<<"\n";
	//if(s.length()>1)
	s.erase(s.find(*max_element(s.begin(),s.end())),1);
	cout<<s;

	return 0;
}