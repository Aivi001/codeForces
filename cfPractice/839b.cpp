//template by Aetius
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
	
	long long n,k,i,x;
	cin>>n>>k;
	vector<long long>v;

	for(i=0;i<k;i++)
	{
		cin>>x;
		v.pb(x);
	}

	sort(v.begin(),v.end(),greater<int>());

	/*for(i=0;i<k;i++)
		cout<<v[i]<<" ";
	cout<<"\n";
	*/

	long long cnt4=n,cnt2=2*n,cnt1=0;

	for(i=0;i<k;i++)
	{
		while(v[i]>0)
		{
			if(cnt4){						
				--cnt4;

				if(v[i]==2)		//if only 2 ppl sit in a 4-seater, then there's room for one more non-group member
					cnt1++;
				if(v[i]==1)		//likewise for one person sitting in a 4-seater
					cnt2++;

			v[i]-=4;			
		}

		else if(cnt2)
		{
			--cnt2;
			v[i]-=2;
		}

		else if (cnt1)
		{
			--cnt1;
			--v[i];
		}

		else{
			cout<<"NO\n";           //exit if no seats available
			return 0;
		} 

		}
	}

	
		cout<<"YES\n";
	


	return 0;
}