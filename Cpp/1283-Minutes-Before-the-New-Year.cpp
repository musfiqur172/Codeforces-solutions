#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int input, total, h, m, t;
    cin >> t;
    total = 24 * 60;
    while (t--)
    {
        cin >> h >> m;
        input = (h * 60) + m;
        cout << total - input << "\n";
    }

    return 0;
}