#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()

int main() {
	long long n,x,ans=0,c=0,i,j;
	cin>>n;
	
	vector<long long>a(n,0),b(n,0);
	for(i=0;i<n;i++) {
		cin>>a[i];
		c=0;
		for(j=0;j<a[i];j++) {
			cin>>x;
			c=max(c,x);
		}
		b[i]=c;
	}
	c=*max_element(all(b));
	for(i=0;i<n;i++) {
		ans+=(ll)(c-b[i])*a[i];
	}
	cout<<ans<<"\n";
}
