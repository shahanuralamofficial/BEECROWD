#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {

        int pa, pb;
        double g1, g2;
        n = 0;
        cin >> pa >> pb >> g1 >> g2;
        while (pa <= pb)
        {
            pa *= (1 + g1 / 100);
            pb *= (1 + g2 / 100);
            n++;
            if (n > 100)
            {
                break;
            }
        }
        if (n > 100)
        {
            cout << "Mais de 1 seculo.\n";
        }
        else
        {
            cout << n << " anos.\n";
        }
    }

    return 0;
}