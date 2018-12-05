#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,i;
	long double d,low,high,mid;
	cin>>t;
	while(t--){

	cin>>d;
	low=0,high=d;

	for(i=0;i<500;i++){
		mid = low + (high-low)/2;  //don't +1 
		if(mid * (d-mid) < d){
			low = mid;
		}
		else{
			high = mid; 		   //don't -1    buggy parts..
		}

	}

	if(abs(low * (d-low) -d) > 1e-6){
		cout<<"N"<<endl;
		continue;

	}
	cout<<fixed<<setprecision(9);
	cout<<"Y"<<" ";
	cout<<low<<" "<<(d-low)<<endl;
		
	}
	return 0;
}