#include <bits/stdc++.h>
using namespace std;

 int g(pair<int, int> a, pair<int, int> b) {
	return abs(a.first - b.first) + abs(a.second - b.second);
}

int main(void) {
	int n, m, i;
	cin>>n>>m;
	vector< pair<int, int> > p, s;
	for(i=0;i<n;i++){
		int x, y;
		cin>>x>>y;
		p.push_back(make_pair(x, y));
	}
	p.push_back(p[0]);
	p.push_back(p[1]);
	for(i=0;i<m;i++) {
		int x;
		scanf("%d", &x);
		s.push_back(make_pair(x, i+1));
	}
	sort(s.begin(), s.end());
	int t;
	for(t=1;t<=2;t++){
		int u[505]={0}, ans[505]={0}, j;
		for(i=t;i<=n;i+=2) {
			for(j=0;j<m;j++) {
				if(!u[j] && g(p[i-1], p[i])+g(p[i], p[i+1])==s[j].first) {
					u[j] = 1, ans[i] = s[j].second;
					break;
				}
			}
			if(j==m) break;
		}
		if(i>n) {
			ans[0] = ans[n];
			cout<<"YES\n";
			for(i=0;i<n;i++)
				ans[i]?cout<<ans[i]<<" ":cout<<"-1 ";
			break;
		}
	}
	if(t>2)
	cout<<"NO\n";
	return 0;
}


