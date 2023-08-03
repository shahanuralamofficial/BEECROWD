#include <bits/stdc++.h>
using namespace std;
int main()
{
    double s = 0, q = 0;
    int t = 1;
    for (int i = 1; i < 40; i += 2)
    {

        q = i * 1.0 / t;
        t = t * 2;
        s = s + q;
    }
    cout << fixed << setprecision(2);
    cout << s << endl;

    return 0;
}