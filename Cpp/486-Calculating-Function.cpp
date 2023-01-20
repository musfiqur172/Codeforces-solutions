#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int n, d;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2;
    }
    else
    {
        d = -(n / 2 + 1);
        cout << d;
    }

    return 0;
}