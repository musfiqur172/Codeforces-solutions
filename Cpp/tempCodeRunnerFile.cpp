#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int empNum, workHour;
    double perHour;

    cin >> empNum >> workHour >> perHour;

    cout << "NUMBER = " << empNum << "\n"
         << "SALARY = U$ " << fixed << setprecision(2) << workHour * perHour << "\n";

    return 0;
}