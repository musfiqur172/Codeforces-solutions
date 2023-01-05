#include <bits/stdc++.h>

using namespace std;

// k + 2k + 3k + ... + wk
// k(1 + 2 + 3 + ... + w)
// k * (w*(w+1)/2)
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int k, n, w, cost;

    cin >> k >> n >> w;
    cost = k * ((w * (w + 1)) / 2);
    if (cost > n)
    {
        cout << cost - n << "\n";
    }
    else
    {
        cout << "0\n";
    }

    return 0;
}