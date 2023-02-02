#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int a, b;
    cin >> a >> b;

    if (a < b)
        cout << a;
    else
        cout << b;
    int ans = abs(a - b);

    cout << " " << ans / 2 << "\n";
    return 0;
}