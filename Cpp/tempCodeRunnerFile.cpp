#include <iostream>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str = "24";

    char a = str[0] - 48, b = str[1] - 48;
    int d1 = (int)a, d0 = (int)b;

    cout << d0 << "\n";
    cout << d1 << "\n";

    int number = d0;
    number = d0 + (d1 * 10);

    cout << number << "\n";

    return 0;
}