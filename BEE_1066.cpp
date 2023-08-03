#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, i, e = 0, o = 0, p = 0, n = 0;
    for (i = 1; i <= 5; i++)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            e++;
        }

        else if (a % 2 != 0)
        {
            o++;
        }

        if (a > 0)
        {
            p++;
        }
        if (a < 0)
        {
            n++;
        }
    }
    cout << e << " valor(es) par(es)\n";
    cout << o << " valor(es) impar(es)\n";
    cout << p << " valor(es) positivo(s)\n";
    cout << n << " valor(es) negativo(s)\n";

    return 0;
}