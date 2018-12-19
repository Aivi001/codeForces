//template by Aetius
//interactive comments ahead! : for the love of CP <3
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define rep(i,a,n) for(i=a;i<n;i++)
#define repe(i,a,n) for(i=a;i<=n;i++)
#define repn(i,a,n) for(i=n;i>a;i--)
typedef long long ll;

using namespace std;

struct val{
	char a,b;
	long long w;
};

int main()
{
	vector<val>v;
	char x,y;
	//bool flg=false;
	long long i,j,n,ans=0,/*costa,costb,*/cost,k;
	string s,t,res="";

	long long mat[26][26];
	for(i=0;i<26;i++)
		for(j=0;j<26;j++)
			{
				if(i==j)
					mat[i][j]=0;
				else
					mat[i][j]=1e12;
			}
	//	cout<<"\n-----------------------------------\n";*/
	cin>>s>>t>>n;

	for(i=0;i<n;i++)
	{
		cin>>x>>y>>cost;
		mat[x-'a'][y-'a']=min(mat[x-'a'][y-'a'],cost);
		/*cin>>x>>y>>cost;
		for(j=0;j<i;j++)
		{
			if(v[j].a==x&&v[j].b==y){						   	PHASE 1
				v[j].w=min(v[j].w,cost);
				flg=true;
			}
		}
		if(flg)
			continue;
		else{
			val vl;
			vl.a=x;vl.b=y;vl.w=cost;
			v.pb(vl);
		}*/
	}

	for(k=0;k<26;k++)
		for(i=0;i<26;i++)
			for(j=0;j<26;j++)
				mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);         //Floyd Warshall (to calc if reaching destn directly has lesser cost than thru intermediate nodes)


	if(s.length()==t.length())									//AND FINALLY, PHASE 3, something sensible <3
	{
		for(i=0;i<s.length();i++)
		{
			if(s[i]==t[i]){
				res+=s[i];
				continue;
			}
			else
			{
				long long mn=1e12;
				for(j=0;j<26;j++)
				{
					if((mat[s[i]-'a'][j]+mat[t[i]-'a'][j])<mn)
					{	mn=mat[s[i]-'a'][j]+mat[t[i]-'a'][j];
						x='a'+j;
					}

				}
				ans+=mn;
				res+=x;
				/*
				costa=mat[s[i]-'a'][t[i]-'a'];
				costb=mat[t[i]-'a'][s[i]-'a'];
				//cout<<"costa "<<costa<<"costb "<<costb<<"\n";
				if(costa==-1&&costb==-1)
				{
					cout<<"-1\n";
					return 0;
				}

				else if(costa==-1)
				{
					ans+=costb;
					res+=s[i];
				}													PHASE 2
				else if(costb==-1)
				{
					ans+=costa;
					res+=t[i];
				}

				else
				{
					costa<costb?(ans+=costa,res+=t[i]):(ans+=costb,res+=s[i]);
				}
				*/

				/*				++++++++++DEFN TLE+++++++++++
				for(j=0;j<n;j++)
				{
					if(v[j].a==s[i]&&v[j].b==t[i])
						costa=v[j].w;
					if(v[j].a==t[i]&&v[j].b==s[i])
						costb=v[j].w;
				}
				if(costa==105)
				{
					ans+=costb;
					res+=s[i];
				}
				else if(costb==105)
				{

				}
				*/
			}


		}
		//PHASE 4- tiny bug o.0
		//PHASE 4.5- 1e10 is the requirment and not 1e6
		if(ans>1e10)
			cout<<"-1\n";
		else
		cout<<ans<<"\n"<<res<<"\n";

	}
	else
		cout<<"-1\n";
		return 0;
}