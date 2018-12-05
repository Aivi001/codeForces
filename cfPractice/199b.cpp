#include<bits/stdc++.h>
using namespace std;

int main()
{
	long double x1,y1,i1,o1,x2,y2,i2,o2,d;
	int ans=0;
	cin>>x1>>y1>>i1>>o1>>x2>>y2>>i2>>o2;

	d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	//cout<<d;

	/*if(d>=(i1+o2))*/
	//if(((i1+o2)*(i1+o2))<=d &&d<=(i1-o2)*(i1-o2))
	//	ans++;
	//if(d>=(i2+o1)/**(i2*o1)*/)
	//if(((i2+o1)*(i2+o1))<=d &&d<=(i2-o1)*(i2-o1))
	//	ans++;
	//if(d>=(o1+o2)/**(o1+o2)*/)
	//if(((o1+o2)*(o1+o2))<=d &&d<=(o1-o2)*(o1-o2))
	//	ans+=2;

	//prev was for ordinary circle and doesn't deal with the case for concentric circles, i.e, case 1 and 3

	//this is the method mentioned in the editorial...

	if(d<=i2-i1||d>=o2+i1||d<=i1-o2)
		ans++;
	if(d<=i2-o1||d>=o2+o1||d<=o1-o2)
		ans++;
	if(d<=i1-i2||d>=o1+i2||d<=i2-o1)
		ans++;
	if(d<=i1-o2||d>=o1+o2||d<=o2-o1)
		ans++;
	cout<<ans<<"\n";
	return 0;
}