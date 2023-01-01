#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int t, n, ans;
    string s;
    cin >> t;

    while (t--)
    {
        cin >> n;
        ans = n;
        cin >> s;

        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] != s[i])
            {
                ans += i;
            }
        }
        cout << ans << endl;
    }

    return 0;
}