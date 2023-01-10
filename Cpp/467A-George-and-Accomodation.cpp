#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n, p, q, roomsFree = 0;

    cin >> n;
    while (n--)
    {
        cin >> p >> q;
        if (q - p >= 2)
            roomsFree++;
    }

    cout << roomsFree << "\n";

    return 0;
}