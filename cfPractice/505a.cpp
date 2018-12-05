#include<bits/stdc++.h>
using namespace std;

bool pal(string s)
{
	for(long long i=0;i<s.length();i++)
	{
		if(s[i]!=s[s.length()-1-i])
			return false;

	}
	return true;
}
int main()
{
	string s,sorg;long long i,n,siz;
	char c;
	set<char>s1;

	cin>>sorg;
	s=sorg;
	n=s.size()/2;
	siz=s.length();
	for(i=0;i<s.size();i++)
	{
		if(s1.find(s[i])==s1.end())
		s1.insert(s[i]);
	else
		s1.erase(s[i]);
	}
//cout<<"s1.size() "<<s1.size()<<"\n";
	if(s1.size()<3)
	{
		int f=0;	
				
			if(s1.size()==1||s1.size()==2)
				//do{
			{		

			 //cout<<*s1.begin()<<" this is s1.begin() val"<<"\n";
			 set<char>::iterator it;
			 for(it=s1.begin();it!=s1.end();it++)
			{ 	 f=0;
				s=sorg;
			 	//cout<<" c val in if "<<*it<<endl;
			 	for(i=0;i<=s.length();i++)                  // I had initially checked by placing the *it in the required pos, but that seemed to be buggy. Here, since |s| is max 10, I decided to manually iterate and check for each pos ( this idea after reading 1 line of editorial)
			 	{
			 		if(pal(s.insert(i,1,*it))){
			 			f=1;
			 			break;
			 		}
			 		else
			 			s=sorg;
			 	}

			 		if(f==1)
			 		{
			 			cout<<s<<"\n";
			 			return 0;
			 			//cout<<"here s is "<<s<<"\n";
			 		}
			 /*	for(i=0;i<s.length();i++)
			 	{
			 	//	cout<<"what's c "<<c<<"\n";
			 		if(s[i]==*it)
			 		{
			 	//		cout<<"here??";
			 			//string ins=c;
			 			s.insert(siz-i,1,*it);
			 			s1.erase(*it);
			 		//	cout<<"s inside if stmt "<<s;
			 			break;
			 		}
			 		else
			 			continue;
			 	}
			 	cout<<"1 odd "<<s<<"\n";
			 	*/
}
if(f==0)
{
	cout<<"NA\n";
	return 0;
}
			 	//}while(!pal(s));
	
	}
		else
			{
			s.insert(n,1,'a');
			
		cout<<s<<"\n";
	}

	}

	else 
		cout<<"NA\n";

	return 0;
}