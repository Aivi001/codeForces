#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    if(n&1) {
        cout<< -1 <<endl;
        
    }
    else{
        for(int i= 0; i<n; i+= 2){
            cout<< i+2 <<" " << i+1 <<" ";
        }
        cout<<endl;
    }
    return 0;

}
