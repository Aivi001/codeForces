#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k,r,i,ans=999999999,t;
    cin>>k>>r;
    
    for(i=1;i<10;i++)
    {
        if((k*i)%10==0)
        {
        ans=i;
        break;
        }
    }
    //cout<<ans<<" ";
    
    for(i=1;i<10;i++)
    {
        if((((k*i)-r)%10)==0)
        {
           // cout<<(((k*i)-r)%10)<<i<<"\n";
           // cout<<i<<" ";
        ans=i<ans?i:ans;
        break;
    }
    }
 //  cout<<ans<<" ";
    if(ans<10)
cout<<ans<<"\n";

else
cout<<"10\n";

return 0;
}

