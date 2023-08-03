#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, area, pi = 3.14159, radious, ta, sa, ra;

    cin >> a;
    cin >> b;
    cin >> c;
    area = 0.5 * a * c;
    radious = pi * c * c;
    ta = ((a + b) / 2) * c;
    sa = b * b;
    ra = a * b;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << area << "\n";
    cout << "CIRCULO: " << radious << "\n";
    cout << "TRAPEZIO: " << ta << "\n";
    cout << "QUADRADO: " << sa << "\n";
    cout << "RETANGULO: " << ra << "\n";

    return 0;
}
