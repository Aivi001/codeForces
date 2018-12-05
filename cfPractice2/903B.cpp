#include<iostream>
#include<algorithm>
#include<tgmath.h>
#include<string>
//#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
  string soln[100];
int h1,h2,a1,a2,c1,toDieM,toDieV,i=0,cnt=0;
cin>>h1>>a1>>c1>>h2>>a2;
if(h2%a1!=0)
toDieM=(h2/a1)+1;
else
toDieM=(h2/a1);
if(h1%a2!=0)
toDieV=(h1/a2)+1;
else
toDieV=(h1/a2);
//cout<<toDieM<<"\t"<<toDieV;
while(h2>0)
{
//if(toDieM>toDieV)
if(h1-a2<=0 || h2-a1>=0)
{
soln[i++]="HEAL";
h1+=c1;
h1-=a2;
//toDieV=ceil(h1/a2)-1;
++cnt;
}
else
{
soln[i++]="STRIKE";
//--toDieM;
//h2-=a1;
h1-=a2;
//--toDieV;
++cnt;
}
}
cout<<cnt<<"\n";
for(int j=0;j<i;j++)
cout<<soln[j]<<"\n";
return 0;
}
