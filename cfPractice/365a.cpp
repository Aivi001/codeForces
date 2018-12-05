#include<bits/stdc++.h>
using namespace std;

bool check(long long m[],long long k)
{
	int f=0;
	for(int i=0;i<=k;i++)
		if(m[i]>0)
			++f;
		//cout<<"f "<<f<<"\n";
		return f==(k+1);
}

bool kgood(long long int n, int k, vector<long long>& ns)
{
	long long dup=n;
	long long num=0,cnt=0;
	long long m[10]={0};

	if(find(ns.begin(),ns.end(),n)!=ns.end())
	{
		//cout<<"heyy";
		return true;
	}
	while(n)
	{
		++num;
	int v = n % 10;	
	
	if(v <= k)
		m[v]++;
					
	 
	n/=10;

	
}
//cout<<"out of while";
//cout<<dup<<" "<<num<<" "<<cnt<<"\n";
if(check(m,k)){
	//cout<<"true\n";
		ns.push_back(dup);
		return true;

	}
	else
		return false;
	//return kgood(n/10,k,ns);
}

int main()
{
	int n, k;
	cin>>n>>k;
	
		vector<long long>ns;
		int c = 0;
		long long int value;
		for(int i = 0; i < n; ++i)
		{
			cin >> value;
			if((value == 0 && k == 0) || kgood(value, k,ns))
			{			
				c++;
				//cout<<"value "<<value<<" "<<kgood(value,k,ns)<<"\n";
				//cout<<"c "<<c<<endl;
			}
		}
		cout << c << endl;		
		
	return 0;
}