#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n[1000], p, x = 0;
    cin >> p;
    for (int i = 0; i < 1000; i++)
    {
        cout << "N[" << i << "] = " << x << endl;
        x = x + 1;
        if (x % p == 0)
        {
            x = 0;
        }
    }

    return 0;
}