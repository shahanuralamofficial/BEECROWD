#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    cout << fixed << setprecision(1);

    if (a + b > c && a + c > b && b + c > a)
    {

        double Perimetro = (a + b + c);
        cout << "Perimetro = " << Perimetro << endl;
    }

    else
    {
        double Area = (0.5 * (a + b) * c);
        cout << "Area = " << Area << endl;
    }

    return 0;
}