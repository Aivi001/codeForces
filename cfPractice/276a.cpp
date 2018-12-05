#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,x,y,i,maxi=-1e9,j=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(y>k)
            j=x-(y-k);
        else
            j=x;
        maxi=max(maxi,j);
        
    }
    cout<<maxi<<"\n";
    
    return 0;
}