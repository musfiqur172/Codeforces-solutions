#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            cout << "I hate that ";
        }
        if (i % 2 == 0)
        {
            cout << "I love that ";
        }
    }
    if (n % 2 != 0)
    {
        cout << "I hate it \n";
    }
    else
    {
        cout << "I love it \n";
    }
    cout << "\n";
    return 0;
}