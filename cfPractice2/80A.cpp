#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int flag=0;
	int counter=0;
	   for(int p=n+1;p<=m;p++){
	       counter=0;
	       for(int i=2;i<=(p/2)+1;i++){
	           if(p%i==0){
							 //cout<<p<<"\t";
	               counter++;
								 //cout<<"1\t";
								 break;
	           }
						 else
						 {//cout<<p<<"\n";
						 continue;
					 }
	     }
			// cout<<"Wololoolo\n";
	     if(counter==0){
				   if(p==m && flag!=1)
	         flag=0;
					 else
					 flag=1;
	         break;
	         }
	        else{
           if(p==m)
	         {flag=1;
	         break;}
	         }
	     }
//cout<<"FLAG\t"<<flag<<endl;
	if(flag)
	   cout<<"NO"<<endl;
	else
	cout<<"YES\n";
	return 0;
}
