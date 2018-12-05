#include<bits/stdc++.h>
using namespace std;

int main()
{

	long long n,i,a,b,x,c=0,ans=0;//c2=0,tot=0,rem=0,neg=0,ans=0;
	cin>>n>>a>>b;

	for(i=0;i<n;i++)
	{

    cin>>x;
    if (x == 2) {
      if (b) b--;
      else ans+=2;
    } else {
      if (a) a--;
      else if (b) c++, b--;
      else if (c) c--;
      else ans++;
    }
  }
  cout<<ans<<"\n";
  return 0;
}


		//needn't make things this complicated...
		/*cin>>x;
		if(x==1)
			++c1;
		else
			++c2;
	}

	tot=a+2*b;

	rem=tot-c1;

	if(rem>0)
	{
		rem/=2;
		c2-=rem;
		if(c2<=0)
			cout<<0<<"\n";
		else
			cout<<c2*2<<"\n";

	}

	else
	{
		neg=abs(rem)+2*c2;
		cout<<neg<<endl;

	}
*/
