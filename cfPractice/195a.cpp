#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a,b,c,x,i,data,w=1e4,val;
	cin>>a>>b>>c;

	cout<<((a-b)*c+b-1)/b<<"\n";

	/* or, 

	totTime=(a*c+b-1)/b;

	iterate i over lims,
		print i when, i   totTime*b>= (totTime-i)*a
		*/
/*
	data=a*c;

	for(i=1;i<1e7;i++)
	{
		if((i*b+b*c)>=a*c)
		{	val=i;
		w=min(w,val);
	}
	
	}
	cout<<w<<endl;
*/
	return 0;
}