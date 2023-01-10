#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n, i, isHard = 0;
    cin >> n;
    while (n--)
    {
        cin >> i;
        if (i)
            isHard = 1;
    }

    if (isHard)
        cout << "HARD\n";
    else
        cout << "EASY\n";

    return 0;
}