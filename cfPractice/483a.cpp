#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long l,r,a=0,b=0,c=0,i,j;
	cin>>l>>r;

	if((r-l)<2)  //l==1 is not a condition
		cout<<"-1\n";

	else
	{
		for(j=l;j<=r;j++)
		{
		a=j;b=j+1;c=0; //a needn't start with l
		for(i=j+2;i<=r;i++)
		{
			if(__gcd(a,i)>1&&__gcd(i,b)==1) //cond 2 is must
				{c=i;
					break;
				}

		}
		if(a&&b&&c)
			break;
	}
		if(a&&b&&c)
			cout<<a<<" "<<b<<" "<<c<<"\n";
		else
			cout<<"-1\n";
	}

	return 0;
}