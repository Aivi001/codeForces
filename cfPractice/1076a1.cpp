#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s,sorted;
	cin>>n>>s;
	int flag=1;
	for(int i=1; i<=n; i++){
		if(flag && s[i]<s[i-1]){
			flag=0;
			continue;
		}
		cout<<s[i-1];
	}
	return 0;
}