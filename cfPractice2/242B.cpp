#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r, minl, maxr, number(1);
    cin>>n>>minl>>maxr;
    for (int i = 2; i <= n; ++i)
    {
        cin>>l>>r;
        if (l <= minl && r >= maxr)
        {
            number = i;
        }
        else if (l < minl || r > maxr)
        {
            number = -1;
        }
        minl = min(minl, l);
        maxr = max(maxr, r);
    }
     cout<<number<<"\n";
    return 0;
}
/*First approach produces error in one assumption:
3
3 3
2 2
1 1
since I compared with an arbitrary first hard coded values rather than actual vals
/*
int main()
{
 long long index,n,x,y,i=0,minl(1000000),maxr(-1000000),flag(0);

cin>>n;
 if(n==1)
{
  cin>>minl>>maxr;
  cout<<"1\n";
  return 0;

}
else
while(n--)
{
  i++;
  cin>>x>>y;
  minl=min(minl,x);
  maxr=max(maxr,y);
  if(x==minl && y==maxr)
  { ++flag;
   index=i;
//   cout<<i<<"\n";
}
}
//cout<<"\n\n"<<flag<<"\n";
flag>0?cout<<index<<"\n":cout<<"-1\n";

return 0;
}
*/
