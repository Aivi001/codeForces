#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll n; cin>>n;
	vector<ll> a(n), b(n);
	for (int i=0; i<n; i++) cin>>a[i];
	for (int i=0; i<n; i++) cin>>b[i];

	ll ret=0;
	for (int i=0; i<n; i++) {
		if(a[i]*2>=b[i]) {
			ll cur=b[i]/2;
			if(cur&&b[i]-cur) ret+=cur*(b[i]-cur);
			else ret--;
		} else ret--;
	}
	cout << ret << endl;
	return 0;
}