#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n, rem, count = 0;
    cin >> n;
    rem = n - 10;

    if (rem == 0)
    {
        cout << 0 << "\n";
        return 0;
    }

    for (int i = 11; i >= 1; i--)
    {
        if (rem % i == 0 && rem / i == 1)
        {
            count += 4;
            break;
        }
    }

    if (rem % 10 == 0)
    {
        count += 11;
    }

    cout << count << "\n";

    return 0;
}