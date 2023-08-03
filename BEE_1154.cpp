#include <bits/stdc++.h>
using namespace std;
int main()
{

    double n, m = 0, sum = 0, avrg;

    while (1)
    {
        cin >> n;
        if (n < 0)
        {
            break;
        }

        sum += n;
        m += 1;
    }
    cout << fixed << setprecision(2);
    avrg = sum / m;
    cout << avrg << endl;

    return 0;
}