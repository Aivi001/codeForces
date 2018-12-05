#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long n,mmin,mmax,x,i,min,max;
    vector<long long> v;
    
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end());
    min=*min_element(v.begin(),v.end());
    max=*max_element(v.begin(),v.end());
cout<<max-min<<" ";
    
    if(min==max)
    cout<<(n*(n-1))/2<<"\n";
    
    else
    {
        mmax=count(v.begin(),v.end(),max);
        mmin=count(v.begin(),v.end(),min);
        cout<<mmax*mmin<<"\n";
        
    }
    
    return 0;
}
