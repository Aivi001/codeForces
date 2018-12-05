#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long y,b,g,x,v,z,yball=0,bball=0,tot=0;
    cin>>y>>b>>x>>v>>z;

    yball=2*x+v;
    bball=v+3*z;

    if(yball>y)
    tot+=yball-y;

    if(bball>b)
    tot+=bball-b;

    cout<<tot<<"\n";
    return 0;
}