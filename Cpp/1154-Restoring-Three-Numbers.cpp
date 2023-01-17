#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int maxi = 0;
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        if (a[i] != maxi)
        {
            cout << maxi - a[i] << " ";
        }
    }

    cout << "\n";

    return 0;
}