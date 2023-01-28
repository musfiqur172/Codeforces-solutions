#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int t, sides = 0;
    cin >> t;
    string shape;
    while (t--)
    {
        cin >> shape;
        if (shape == "Tetrahedron")
            sides += 4;
        else if (shape == "Cube")
            sides += 6;
        else if (shape == "Octahedron")
            sides += 8;
        else if (shape == "Dodecahedron")
            sides += 12;
        else if (shape == "Icosahedron")
            sides += 20;
    }

    cout << sides << "\n";

    return 0;
}