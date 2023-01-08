#include <bits/stdc++.h>

using namespace std;

int main()
{

    double a, b, c, sum, w, avg;

    cin >> a >> b >> c;

    sum = (a * 2 + b * 3 + c * 5);
    avg = sum / 10;

    cout << "MEDIA = " << fixed << setprecision(1) << avg << "\n";

    return 0;
}