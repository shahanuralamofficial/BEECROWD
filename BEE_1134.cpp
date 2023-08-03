#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, i = 0, j = 0, k = 0;
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (true)
    {
        cin >> a;

        if (a == 4)
        {
            break;
        }
        else if (a == 1)
        {
            i++;
        }
        else if (a == 2)
        {
            j++;
        }
        else if (a == 3)
        {
            k++;
        }
        else
        {
            cout << "MUITO OBRIGADO" << endl;
        }
    }
    cout << "Gasolina: " << j << endl;
    cout << "Diesel: " << k << endl;
    cout << "Alcool: " << i << endl;
    return 0;
}