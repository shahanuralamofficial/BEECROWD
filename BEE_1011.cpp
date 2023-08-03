#include <bits/stdc++.h>
using namespace std;

int main()
{

    double r, pi = 3.14159, volume;
    cin >> r;
    volume = (4.0 / 3) * pi * r * r * r;

    cout << fixed << setprecision(3);

    cout << "VOLUME = " << volume << endl;
    return 0;
}