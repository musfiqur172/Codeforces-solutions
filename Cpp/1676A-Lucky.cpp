#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int t, n, count, lastThree, firstThree;
    cin >> t;
    while (t--)
    {
        cin >> n;
        count = 0, lastThree = 0, firstThree = 0;
        while (count != 3)
        {
            lastThree += n % 10;
            n = n / 10;
            count++;
        }
        count = 0;
        while (count != 3)
        {
            firstThree += n % 10;
            n = n / 10;
            count++;
        }

        if (firstThree == lastThree)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}