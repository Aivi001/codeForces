#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long A,B,x,y,z,result,t=0;
    cin>>A>>B>>x>>y>>z;
    result=max(t,(2*x+y)-A)+max(t,(3*z+y)-B);
    cout<<result<<"\n";
    return 0;
}
