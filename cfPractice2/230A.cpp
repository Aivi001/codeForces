#include<bits/stdc++.h>
using namespace std;

int main()
{
 multimap<long long,long long > val;
 multimap<long long,long long >::iterator it;
 long long s,n,x,y;
 int flag=0;
 cin>>s>>n;

 for(int i=0;i<n;i++)
 {
   cin>>x>>y;
   val.insert(pair<long long,long long>(x,y));

 }

 for(it=val.begin();it!=val.end();it++)
 {
  // cout<<it->first<<"\t"<<it->second<<"\n";
 if(it->first < s)
 {s+=(it->second);
//cout<<s<<"\n";
}
 else
 {
 flag=1;
 break;
 }
 }
 flag==1?cout<<"NO\n":cout<<"YES\n";
 return 0;

}
