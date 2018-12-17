//template by Aetius
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define rep(i,a,n) for(i=a;i<n;i++)
#define repe(i,a,n) for(i=a;i<=n;i++)
#define repn(i,a,n) for(i=n;i>a;i--)
typedef long long LL;

using namespace std;

char s[4];
long long ans = 1LL<<60;
void dfs3(LL a,LL b)
{
	LL temp=0;
    if (s[2]=='+')
	    temp = a+b;
    else
	    temp = a*b;
    ans = min(ans,temp);	
}
void dfs2(LL a,LL b,LL c)
{
	if (s[1]=='+')
	{
		dfs3(a+b,c);
		dfs3(a+c,b);
		dfs3(b+c,a);
	}
 
	else
	{
		dfs3(a*b,c);
		dfs3(a*c,b);
		dfs3(b*c,a);
	}
}
void dfs1(LL a,LL b,LL c,LL d)
{
	if (s[0]=='+')
	{
		dfs2(a+b,c,d);
        dfs2(a+c,b,d);
		dfs2(a+d,b,c);
		dfs2(b+d,a,c);
		dfs2(b+c,a,d);
		dfs2(c+d,a,b);
	}
	else
	{
		dfs2(a*b,c,d);
        dfs2(a*c,b,d);
		dfs2(a*d,b,c);
		dfs2(b*d,a,c);
		dfs2(b*c,a,d);
		dfs2(c*d,a,b);
	}
}
int main()
{
	LL a,b,c,d;
	cin >> a >> b >> c >> d;
    cin >> s[0] >> s[1]>>s[2];
	dfs1(a,b,c,d);
	cout <<ans << endl;
}
/*  This doesn't yield the optimal ans. Only possible by going thru all combinations as above 
int main()
{
	char x;
	long long add=0,mult=0,num1,num2,ans=0,i,j;
	vector<long long>v(4);
	vector<char>op;

	cin>>v[0]>>v[1]>>v[2]>>v[3];
	cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<"\n";

	for(i=0;i<3;i++)
	{
		cin>>x;
		op.pb(x);
		cout<<op[i]<<" ";
	}

	cout<<"\nbefore\n";
	for(i=0;i<3;i++)
	{
		sort(v.begin(),v.end());
		for(j=0;j<v.size();j++)
			cout<<v[j]<<" ";
		cout<<"\n";
		num1=v[0];num2=v[1];
		v.erase(v.begin(),v.begin()+2);

		if(op[i]=='+')
			ans=num1+num2;
		else
			ans=num1*num2;
		v.pb(ans);
	}
	cout<<ans<<"\n";

	return 0;
}

*/