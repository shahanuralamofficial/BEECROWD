#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, avrg;
    cin >> a >> b;
    avrg = (a * 3.5 + b * 7.5) / (3.5 + 7.5);
    cout << fixed << setprecision(5) << "MEDIA = " << avrg << endl;
    return 0;
}