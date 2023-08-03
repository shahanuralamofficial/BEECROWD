#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c, d, r1, r2;
    cin >> a >> b >> c;

    d = sqrt(b * b - 4 * a * c);

    if (d > 0 && a != 0)
    {

        r1 = (-b + d) / (2 * a);
        r2 = (-b - d) / (2 * a);
        cout << fixed << setprecision(5);

        cout << "R1 = " << r1 << "\nR2 = " << r2 << endl;
    }
    else
    {
        cout << "Impossivel calcular\n";
    }

    return 0;
}