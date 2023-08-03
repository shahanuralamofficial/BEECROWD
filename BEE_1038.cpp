#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y;
    double x1 = 4.00, x2 = 4.50, x3 = 5.00, x4 = 2.00, x5 = 1.50;
    cin >> x >> y;

        cout << fixed << setprecision(2);
    if (x == 1)
    {
        cout << "Total: R$ " << x1 * y << endl;
    }
    else if (x == 2)
    {
        cout << "Total: R$ " << x2 * y << endl;
    }
    else if (x == 3)
    {
        cout << "Total: R$ " << x3 * y << endl;
    }
    else if (x == 4)
    {
        cout << "Total: R$ " << x4 * y << endl;
    }
    else if (x == 5)
    {
        cout << "Total: R$ " << x5 * y << endl;
    }

    return 0;
}