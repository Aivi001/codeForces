#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    string s1=to_string(a);
    string s2=to_string(b);
    while(lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end()))
    {
    next_permutation(s1.begin(),s1.end());
    //cout<<s1<<"\t";
  }
    cout<<s1<<"\n";
return 0;
}
