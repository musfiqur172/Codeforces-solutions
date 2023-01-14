#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int t, n, res;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n <= 2)
        {
            res = 0;
        }
        else
        {
            res = (n - 1) / 2;
        }
        cout << res << "\n";
    }

    return 0;
}