#include <bits/stdc++.h>
//#include <algorithm>
#include<vector>
using namespace std;

int main()
{
    int n, m,x;
    vector<int> v;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
    cin>>x;
    v.push_back(x);
    }
    sort(v.begin(),v.end());

    int s(0);
    for (int i = 0; i < m; ++i)
    {
        if (v[i] >= 0)
        {
            break;
        }
        s += v[i];
    }
    cout << -s << endl;
    return 0;
}

// yea :))
