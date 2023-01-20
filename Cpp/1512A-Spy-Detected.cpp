#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;

    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;
        for (int i = 0; i < a.size(); i++)
        {
            int x;
            cin >> x;
            a[i] = x;
            mp[x]++;
        }

        for (auto i : mp)
        {
            if (i.second == 1)
            {
                for (int j = 0; j < (int)a.size(); j++)
                {
                    if (a[j] == i.first)
                    {
                        cout << j + 1 << "\n";
                        break;
                    }
                }
            }
        }
    }

    return 0;
}