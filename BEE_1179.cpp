#include <bits/stdc++.h>
using namespace std;

int main()
{
    int par[5], impar[5], p, even_count = 0, odd_count = 0;

    for (int j = 0; j < 15; j++)
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

        if (even_count == 5)
        {
            for (int k = 0; k < 5; k++)
            {
                cout << "par[" << k << "] = " << par[k] << "\n";
                par[k] = 0; 
            }
            even_count = 0;
        }
        if (odd_count == 5)
        {
            for (int k = 0; k < 5; k++)
            {
                cout << "impar[" << k << "] = " << impar[k] << "\n";
                impar[k] = 0;  
            }
            odd_count = 0;
        }
    }

 
    for (int i = 0; i < odd_count; i++)
    {
        cout << "impar[" << i << "] = " << impar[i] << "\n";
    }

    for (int i = 0; i < even_count; i++)
    {
        cout << "par[" << i << "] = " << par[i] << "\n";
    }

    return 0;
}
