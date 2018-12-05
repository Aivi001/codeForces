#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int>m;
    int k, val, total(0);
    cin >> k;
    for (int i = 0; i < 12; ++i)
    {
        cin >>val;
        m.push_back(val);
        total +=val;
    }

    if (total < k)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(m.begin(),m.end(), greater<int>());
        int sum = 0;
        int month = 0;
        while (sum < k)
        {
            sum += m[month];
            month += 1;
        }
        cout << month << endl;
    }

    return 0;
}
