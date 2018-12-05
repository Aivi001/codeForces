#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    long long n,j,i,d,x[100005],ans=0;
    
    cin>>n>>d;
    for(i=0; i<n; i++) 
    	cin>>x[i];
    for(i=0, j=0; i<n; i++) {
        while(abs(x[i]-x[j])>d) j++;
        ans+=(abs(i-j))*abs((i-j-1))/2;
    }
    cout<<ans<<endl;
}