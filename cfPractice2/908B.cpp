/*#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<cstdlib>
#include<utility>
*/
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<time.h>
#include<utility>
#include<vector>
#define REP(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
int i,j,n,m,num=0,len,xco,yco;
string s1,seq;
 vector<int>dic;

REP(i,4)
dic.push_back(i);

cin>>n>>m;
REP(i,n)
{
cin>>s1[i];

for(int j=0;j<m;j++)
{
if(s1[i][j]=='S')
pair<int,int> st={i,j};
else
continue;
}
}
cin>>seq;

len=seq.length();
do
{
xco=st.first;
yco=st.second;

 REP(i,len)
 {
if(seq[i]==dic[0]+48)
xco--;
else if(seq[i]==dic[1]+48)
xco++;
else if(seq[i]==dic[2]+48)
yco--;
else
yco++;

if(xco<0||xco>n||yco>m||yco<0)
break;

if(s1[xco][yco]=='#')
break;

if(s1[xco][yco]=='E')
{
  num++;
  break;
}

 }


}
while(next_permutation(dic.begin(),dic.end()));

return 0;
}
