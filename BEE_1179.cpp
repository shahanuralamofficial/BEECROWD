#include <bits/stdc++.h>
using namespace std;

int main()
{
    int par[5], impar[5], p, even_count = 0, odd_count = 0;

    for (int j = 1; j <= 15; j++)
    {
        cin >> p;
        if (p % 2 == 0)
        {
            if (even_count < 5)
                par[even_count++] = p;
        }
        else
        {
            if (odd_count < 5)
                impar[odd_count++] = p;
        }
    }

    for (int i = 0; i < even_count; i++)
    {
        cout << "par[" << i << "] = " << par[i] << endl;
    }

    for (int i = 0; i < odd_count; i++)
    {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }

    return 0;
}
