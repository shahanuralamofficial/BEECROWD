#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    double c, d;
    cin >> a >> b;

    c = (double)b / 12.0;
    d = (double)a * c;

    cout << fixed << setprecision(3);
    cout << d << "\n";

    return 0;
}