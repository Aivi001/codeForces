#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b,t;
    cin>>a>>b;
    int lena,lenb;
    sort(a.begin(),a.end());
    lena=a.length();
    lenb=b.length();
    if(lena<lenb){
        reverse(a.begin(),a.end());
    }
    else{
        for(int i=0;i<lena;i++){
            for(int j=lena-1;j>i;j--){
                t=a;
                swap(a[i],a[j]);
                sort(a.begin()+i+1,a.end());
                if(a.compare(b)>0){
                    a=t;
                }
                else break;
            }
        }
    }
    cout<<a<<endl;
    return 0;
}