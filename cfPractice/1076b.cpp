#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
	long long i,j,n;
	cin>>n;
	//bool arr[n+1];
	vector<long long>p;
	vector<bool>arr(10000000,true);
	//memset(arr,0, sizeof(arr));
	arr[0]=0;arr[1]=0;


	if(n%2==0){
		cout<<n/2<<"\n";
		return 0;
	}

	//sieve 
	for(i=2;i*i<=10000000;i++)
	{
		if(arr[i]==true){
			//arr[i]=i;

		for(j=i*i;j<=10000000;j+=i)
			arr[j]=false;
	}

	}

for(i=0;i<arr.size();i++)
{
	if(arr[i]==true)
		p.push_back(i);
	
		
}

for(i=0;i<p.size();i++)
{
	if(n%p[i]==0)
	{
		cout<<1+(n-p[i])/2;
		return 0;
	}
}
/*
if(find(p.begin(),p.end(),n)!=p.end())
{cout<<"1\n";
return 0;
}

else
{
	for(i=0;i<p.size();i++)
	{
		if(n%p[i]==0)
		{
			cout<<n/p[i]<<"\n";
			return 0;
		}

	}
}
*/

return 0;
}
	
