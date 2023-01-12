#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 100, sum = 0;
    vector<int> d[n + 1];

    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = i; j <= n; j = j + i)
        {
            d[j].push_back(i);
            count++;
        }
        // cout << "i = " << i << " count = " << count << "\n";
        // cout << "i = " << i << " =>";
        // for (int j = 0; j < d[i].size(); j++)
        // {
        //     cout << d[i][j] << " ";
        // }
        // cout << "\n";
        sum += count;
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < d[i].size(); j++)
    //     {
    //         cout << d[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    cout << "sum = " << sum << "\n";

    return 0;
}