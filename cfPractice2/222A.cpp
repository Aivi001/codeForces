#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k,x,ans;
    cin>>n>>k;
    ans=n;
    vector<long long > v;

    for(long long p = 1; p <= n; p++)
    {
       cin>>x;
       v.push_back(x);
    }
    long tar=v[n];

    for(long long p = n; p > 0; p--){
        if(v[p] == tar){--ans;}
        else{break;}
    }
    if(ans < k){ans = -1;}
    cout<<ans<<"\n";
    return 0;
}
