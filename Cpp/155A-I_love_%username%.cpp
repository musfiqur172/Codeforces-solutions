#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxi = arr[0], mini = arr[0], count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            count++;
        }
        if (arr[i] < mini)
        {
            mini = arr[i];
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}