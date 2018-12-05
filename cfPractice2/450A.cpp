#include <iostream>
using namespace std;

int main()
{
	string s,s2;
	int a, m, n, pos, max = 0;
	cin >>s>>s2>>n >> m;
	cout<<s<<"\t"<<s2<<"\n";
	for(int i = 1; i < n + 1; i++)
	{
		cin >> a;
		if(a % m == 0)
		{
			if(a / m >= max)
			{
				max = a / m;
				pos = i;
		//		cout<<"Even\t"<<a<<"\t"<<max<<'\n';
			}
		}
		else
		{
			if(a / m + 1 >= max)
			{
				max = a / m + 1;
				pos = i;
				//	cout<<"Odd\t"<<a<<"\t"<<max<<'\n';
			}
		}
	}

	cout << pos;

	return 0;
}
