#include<iostream>
using namespace std;

int main(){
int p[20010],c[20010];
int n,m;
cin>>n;

        p[1] = 1;
        for(int i = 2; i <= n; ++i){
            cin>>p[i];
        }

        for(int i = 1; i <= n; ++i){
           cin>>c[i];
        }

        int ans = 0;
        for(int i = 1; i <= n; ++i)
            if(c[i] != c[p[i]]){
                ++ans;
            }


        cout<<ans + 1;
        return 0;
}
