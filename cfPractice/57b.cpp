#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[200000], b[200000], c[200000], n, m, k, ans[300], pos[300];

int main(){
    
    cin >> n >> m >> k;
    for(int i = 0; i < m; ++i){    
        scanf("%d%d%d", &a[i], &b[i], &c[i]);
        a[i]--, b[i]--;
    }    
    for(int i = 0; i < k; ++i){
        scanf("%d", &pos[i]);
        pos[i]--;
    }    
    
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < k; ++j){
            if(a[i] <= pos[j] && pos[j] <= b[i])
                ans[j] += pos[j]-a[i]+c[i];
        }
    }
    
    ll sum = 0;
    for(int i = 0; i < k; ++i)
        sum += ans[i];
        
    cout << sum << endl;    

    return 0;
}