#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n, i, A = 0, D = 0;
    cin >> n;
    string str;
    cin >> str;

    for (i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A')
            A++;
        else
            D++;
    }

    if (A == D)
    {
        cout << "Friendship\n";
    }
    else if (A > D)
    {
        cout << "Anton\n";
    }
    else
    {
        cout << "Danik\n";
    }

    return 0;
}