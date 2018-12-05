/*#include<iostream>
#include<vector>
#include<algorithm>
#define REPr(i,a,n) for(int i=a;i<n;i++)
#define REPu(i,n) REPr(i,1,n)

using namespace std;

int main()
{
int n,x,i,j,k=0;
cin>>n;
vector <int> v;
v.push_back(1);

REPr(i,2,n+1)
{
cin>>x;
v.push_back(x);
}

if(n%4!=0)
cout<<"No\n";
 if(n==4)
cout<<"Yes\n";

else
{
REPu(i,n)
{
  j=count(v.begin(),v.end(),i);
if(j>=3||j==0)
{//cout<<"yuss";
k+=j;
if(k==n)
{cout<<"Yes";
break;}
else
continue;}

else
{cout<<"No\n";
break;
}

}
}

return 0;
}
*/

#include<iostream>
#include<vector>
#include<algorithm>
#define REPr(i,a,n) for(int i=a;i<n;i++)

using namespace std;

int main() {
  int i,n;
  cin >> n;
  vector<int> v(n), degree(n),leaves(n);;
  REPr(i,1,n) {
    cin >> v[i];
    v[i]--;
    degree[v[i]]++;
  }

REPr(i,0,n) {
    if (degree[i] == 0) {
      leaves[v[i]]++;
    }
  }
  REPr(i,0,n){
    if (degree[i] > 0 && leaves[i] < 3) {
      cout<<"No\n";
      return 0;
    }
  }
  cout<<"Yes\n";
  return 0;
}
