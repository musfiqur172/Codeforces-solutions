#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, a, rem;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        rem = a % 10;
    }

    if (rem == 0 || rem == 5)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}