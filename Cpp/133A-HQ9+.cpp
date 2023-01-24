#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string input;
    cin >> input;

    bool flag = false;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'H' || input[i] == 'Q' || input[i] == '9')
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}