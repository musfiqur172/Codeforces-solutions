#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n, answer = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 1; i < n; i++)
    {
        if (str[i - 1] == str[i])
        {
            answer++;
        }
    }

    cout << answer << "\n";

    return 0;
}