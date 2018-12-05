/*#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
//#define vector<int>iterator i
using namespace std;

int main()
{
vector<int>v;
int n,x,max,min;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>x;
v.push_back(x);
}

vector<int>::iterator it1;
vector<int>::iterator it2;
it1=max_element(v.begin(),v.end());
it2=min_element(v.begin(),v.end());
max=abs(distance(it1,v.begin()));
min=abs(distance(it2,v.end()-1));
cout<<max<<"\t"<<min<<"\n";
if(n&1)
cout<<max+min-1<<"\n";
else
cout<<max+min<<"\n";

return 0;
}
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int flag=0,min,max,imin=0,imax=0,n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
     cin>>a;
     if(i==0)
     {
         min=a;
         max=a;
     }
     else
     {
         if(a>max)
         {
             max=a;
             imax=i;
         }

         if(a<=min)
         {
             min=a;
             imin=i;
         }
     }
    }
    if(imin<imax)
        flag=1;
    cout<<n-1-imin+imax-flag<<endl;
    return 0;
}

//first implementation using vector has a small drawback , hence used arr
