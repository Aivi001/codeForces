#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b,temp;
    cin>>a>>b;
    int al,bl;
    sort(a.begin(),a.end());
    al=a.length();
    bl=b.length();
    if(al<bl){
        reverse(a.begin(),a.end());
    }
    else{
        for(int i=0;i<al;i++){
            for(int j=al-1;j>i;j--){
                temp=a;
                swap(a[i],a[j]);
                sort(a.begin()+i+1,a.end());
                if(a.compare(b)>0){
                    a=temp;
                }
                else break;
            }
        }
    }
    cout<<a<<endl;
    return 0;
}