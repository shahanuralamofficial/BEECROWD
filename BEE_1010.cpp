#include <bits/stdc++.h>

using namespace std;

int main()
{
    int product, unit, product2, unit2;
    double value, value2, result, result2, total;
    cin >> product;
    cin >> unit;
    cin >> value;
    cin >> product2;
    cin >> unit2;
    cin >> value2;

    result = (double)unit * value;
    result2 = (double)unit2 * value2;
    total = result + result2;

    cout << fixed << setprecision(2);

    cout << "VALOR A PAGAR: R$ " << total << endl;
    return 0;
}