#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long p,x,i;
	cin>>p>>x;

	for(i=pow(10,p);i<pow(10,(p+1))&&i%10!=0;i++)
	{
		cout<<"here!!";
		//if((i*((x*10)-1))==((i%10)*(p-1)*10))
		cout<<i*x<<" "<<(pow((i%10),(p-1))+i/10)<<"\n";
		if((i*x)==(pow((i%10),(p-1))+i/10))
		{
			cout<<i<<"\n";
			return 0;
		}
	}
	cout<<i<<" that was last i\n";
	cout<<"Impossible\n";
	return 0;
}