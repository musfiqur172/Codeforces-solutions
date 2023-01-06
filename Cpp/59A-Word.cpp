#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    int up = 0, low = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (isupper(str[i]))
            up++;
        else
            low++;
    }

    if (up > low)
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = toupper(str[i]);
        }
        cout << str << endl;
    }
    else
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = tolower(str[i]);
        }
        cout << str << endl;
    }

    return 0;
}