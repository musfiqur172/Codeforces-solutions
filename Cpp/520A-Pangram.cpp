#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string str;
    cin >> str;

    for (int i = 0; i < n; i++)
    {
        str[i] = tolower(str[i]);
    }

    sort(str.begin(), str.end());

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] != str[i + 1])
        {
            count++;
        }
    }

    if (count == 26)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}