#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, i, maxi = 0, res = 0;
    cin >> n;
    vector<int> arr(n);
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        res += maxi - arr[i];
    }

    cout << res << "\n";

    return 0;
}