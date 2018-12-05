/*#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,i;
	string s;
	vector<long long>l,r;
	vector<long long>::iterator it;

	cin>>n>>s;

	for(i=0;i<s.size();i++)
	{
		if(s[i]=='L')
			l.push_back(i);
		else
			r.push_back(i);
	}

	sort(l.begin(),l.end());
	sort(r.begin(),r.end());

	for(i=0;i<l.size();i++)
	{
		it=upper_bound(r.begin(),r.end(),l[i]+1);
		if(it==r.end())
			it=upper_bound(l.begin(),l.end(),l[i]+1);
	
		cout<<l[i]+1<<" "<<*it+1<<"\n";
		*it=-1;

	}

	return 0;
}
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
long long n;
string s;
cin>>n>>s;

for(int i=1;i<=n/2;i++)
    if(s[i-1]=='R')
        cout<<n/2+i<<" "<<i<<endl;
    else cout<<i<<" "<<n/2+i<<endl;
	
	return 0;
}