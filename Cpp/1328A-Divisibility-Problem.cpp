#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int t, a, b, moves;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a % b == 0)
            cout << "0"
                 << "\n";
        else
            cout << b - (a % b) << "\n";
    }

    return 0;
}