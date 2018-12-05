#include<bits/stdc++.h>
#define ll long long 
#define ld long double
#define X first
#define Y second
#define pb push_back
#define max_el(x) max_element(x.begin(),x.end())-x.begin()
#define min_el(x) min_element(x.begin(),x.end())-x.begin()
#define mp make_pair
#define endl '\n'
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;

	vector<int> a(101);
	for(int i=0;i<n;i++){
		int u;
		cin>>u;
		a[u]+= 1;
	}
	int t = max_el(a);
	t = a[t];

	int p = ceil((double)t/k);
	 cout<<"values of t and p: "<<t<<" "<<p<<endl;


	p = p*k;
	cout<<"Now,p: "<<p<<"\n";

	int ans = 0;
	for(int i=0;i<=100;i++){
		if(a[i] == 0) continue;
		ans += p-a[i];
		cout<<a[i]<<" val of a[i]\n";
		cout<<ans<<"\n";
	}
	cout<<ans<<endl;

}