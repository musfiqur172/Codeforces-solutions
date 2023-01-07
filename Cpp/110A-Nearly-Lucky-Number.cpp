#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int i;
    string str;
    cin >> str;

    int count = 0;
    for (i = 0; i < str.size(); i++)
    {
        if (str[i] == '4' || str[i] == '7')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
