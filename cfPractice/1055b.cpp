#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m,l,i,ch,a,b,tot=0,cnt=0,j;
	cin>>n>>m>>l;
	vector<long long>val(n);
	cout<<" m is "<<m<<"\n";
	for(i=0;i<n;i++)
		cin>>val[i];

for(i=0;i<n;i++)
{
	if(val[i]>l)
		++cnt;
	else
	{
		if(cnt>0)
		{
			++tot;
			cnt=0;
		}
	}
}
if(cnt>0)
	++tot;
cnt=0;
	for(j=0;j<m;j++)
	{


		cin>>ch;

		if(ch==0)
			cout<<tot<<"\n";
		else
		{
			//cout<<"TOT is "<<tot<<"\n";
			cin>>a>>b;
			val[a-1]+=b;
			
			//for(i=0;i<n;i++)
			//cout<<val[i]<<" ";
			//cout<<"\n";
			//scout<<"old  "<<val[a-1]-b<<" new "<<val[a-1]<<"\n";
			if((val[a-1]-b)<=l&&val[a-1]>l)
			{
				if(n==1){
					++tot;
					break;
				}

				if(n==2)
				{
					if((a-1)==0)
						if(val[1]<l)
							++tot;
						else;

					else if((a-1)==1)
						if(val[0]<l)
							++tot;
						else;
					else;

				}
				//cout<<"inside main if\n";
				if((a-2)>=0&&val[a-2]>l&&a<n&&val[a]>l)			// case when:  ...great ltog great...
					{//cout<<"dec 1\n";
					--tot;
				}
				else if((a-2)>=0&&val[a-2]<=l&&a<n&&val[a]>l);   // case when:  -less ltog great...
				else if(a<n&&val[a]<=l&&(a-2)>=0&&val[a-2]>l);   // case when:  ...great ltog less-
				

				//case when:  ...less ltog less... ||  -ltog less... ||  ...less ltog- 
				else if(((a-2)>=0&&val[a-2]<=l&&a<n&&val[a]<=l)||(a<n&&val[a]<=l)||((a-2)>=0&&val[a-2]<=l))
				{
					//cout<<"inc 1\n";
					++tot;
				}
				else;
			}
//if(cnt>0)
//	++tot;

		}

	}


	return 0;
}