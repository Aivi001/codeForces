//template by Aetius
//interactive comments ahead! : for the love of CP <3
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define rep(i,a,n) for(i=a;i<n;i++)
#define repe(i,a,n) for(i=a;i<=n;i++)
#define repn(i,a,n) for(i=n;i>a;i--)
typedef long long ll;

using namespace std;

int main()
{
	
	long long n,i,j,cost=1e5,num;
	cin>>n;
	vector<long long>a(n),b(n),c(n),d(n);
	vector<bool>outDated(n,false);

	rep(i,0,n)
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	
	rep(i,0,n)
	{
		bool o=false;
		rep(j,0,n)
		{
			if(i!=j)
			{
				if(a[j]>a[i]&&b[j]>b[i]&&c[j]>c[i])         //PHASE 2: 	all specs strictly less than only some *other* and not each
					o=true;
			}

		}
		if(o)
			outDated[i]=true;
	}


	rep(i,0,n)
	{
		if(!outDated[i])
		{
			//cout<<i+1<<" ";
			if(cost>d[i])
			{
				cost=d[i];
				num=i+1;
			}
		}
	}
//cout<<"\n";
	cout<<num<<"\n";                 //plain english to code, fingers crossed AC in 1 go

	return 0;
}