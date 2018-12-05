#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	long long a=0,g=0,n,i,x,y;
	bool flg=false;
	cin>>n;
	string s="";
	//vector<pair<long long>>p(n);

	cin>>x>>y;
	if(x<=y)
				{
					a+=x;
					s+='A';
				}
			else{
				g+=y;
				s+='G';
			}

	for(i=1;i<n;i++){
		//cin>>p[i].first>>p[i].second;
		cin>>x>>y;
		//if(x<=y){

			if(abs((a+x)-g)<=500){
				a+=x;
				s+='A';
				
			}

			else if(abs((g+y)-a)<=500){
				g+=y;
				s+='G';
			}
		//}
			else
			{
				flg=true;
				break;
			}


	}

	if(flg)
		cout<<"-1\n";
	else
		cout<<s<<"\n";




	return 0;
}