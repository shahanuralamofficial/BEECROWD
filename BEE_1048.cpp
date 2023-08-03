#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    cin >> a;

    cout << fixed << setprecision(2);

    if (a >= 0 && a <= 400.00)
    {
        double b = 15, c = (a * b) / 100.00;

        cout << "Novo salario: " << a + c << endl
             << "Reajuste ganho: " << c << endl
             << fixed << setprecision(0) << "Em percentual: " << b << " %" << endl;
    }
    else if (a >= 400.01 && a <= 800.00)
    {
        double d = 12, e = (a * d) / 100.00;

        cout << "Novo salario: " << a + e << endl
             << "Reajuste ganho: " << e << endl
             << fixed << setprecision(0) << "Em percentual: " << d << " %" << endl;
    }
    else if (a >= 800.01 && a <= 1200.00)
    {
        double f = 10, g = (a * f) / 100.00;

        cout << "Novo salario: " << a + g << endl
             << "Reajuste ganho: " << g << endl
             << fixed << setprecision(0) << "Em percentual: " << f << " %" << endl;
    }
    else if (a >= 1200.01 && a <= 2000.00)
    {
        double h = 7, i = (a * h) / 100.00;

        cout << "Novo salario: " << a + i << endl
             << "Reajuste ganho: " << i << endl
             << fixed << setprecision(0) << "Em percentual: " << h << " %" << endl;
    }
    else if (a > 2000)
    {
        double j = 4, k = (a * j) / 100.00;

        cout << "Novo salario: " << a + k << endl
             << "Reajuste ganho: " << k << endl
             << fixed << setprecision(0) << "Em percentual: " << j << " %" << endl;
    }

    return 0;
}