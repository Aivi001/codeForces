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

typedef pair<int,int> pii;

int main() {
	int n,m,k,t; cin>>n>>m>>k>>t;

	set<pii> st;
	vector<pii> v;
	for (int i=0; i<k; i++) {
		int ii, jj; cin>>ii>>jj;
		pii p=make_pair(ii,jj);
		v.push_back(p);
		st.insert(p);
	}
	sort(v.begin(), v.end());

	string list[3]={"Carrots", "Kiwis", "Grapes"};
	for (int i=0; i<t; i++) {
		int ii, jj; cin>>ii>>jj;
		pii p=make_pair(ii,jj);
		if(st.find(p)!=st.end()) cout << "Waste" << endl;
		else {
			int cur=(ii-1)*m+(jj-1);
			for (int j=0; j<k; j++) {
				int iii=v[j].first, jjj=v[j].second;
				if(iii>ii) break;
				if(iii<ii) cur--;
				else if(iii==ii && jjj<=jj) cur--;
			}
			cur%=3; cout << list[cur] << endl;
		}
	}

	return 0;
}

// PHASE 1 had a tiny refinement needed, saw edit for that alone, otherwise, solved a 1500 diff prob.. Yaay!! :))
// Initial idea: 
// 1. calc start crop for each row beforehand, then answer tth query by (m-no.of empty before this jth val)%3 --- this could have buggy cases/elaborate coding when calc no.of empty before the current jth col. 
// 2. Also, why create memory for each row unnecessarily?? (10^4 vectors dude!) 

/*
using namespace std;

int main()
{
	
	long long n,m,k,t,i,x,y;
	cin>>n>>m>>k>>t;

	vector<long long>v(n,vector<long long>());

	for(i=0;i<k;i++)
	{
		cin>>x>>y;
		v[x-1].push_back(y-1);

	}

	for(i=0;i<n;i++)
		sort(v[i].begin(),v[i].end());
	



	return 0;
}	
*/