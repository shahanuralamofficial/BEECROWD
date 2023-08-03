#include <bits/stdc++.h>
using namespace std;

int main()
{

    float x, y, z;
    y = 0;
    z = 0;
    while (1)
    {
        cin >> x;
        if (x < 0 || x > 10)
        {
            cout << "nota invalida\n";
        }
        else if (z == 0)
        {
            y = x;
            z = 1;
        }
        else
        {
            cout << "media = " << (y + x) / 2 << endl;
            break;
        }
    }
    return 0;
}