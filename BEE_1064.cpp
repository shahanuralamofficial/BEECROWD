#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, avrg, sum = 0;
    int i, p = 0;

    for (i = 1; i <= 6; i++)
    {
        cin >> a;
        if (a > 0)
        {
            p++;
            sum = sum + a;
        }
    }

    avrg = sum / p;
    cout << fixed << setprecision(1);

    cout << p << " valores positivos\n"
         << avrg << endl;
    return 0;
}