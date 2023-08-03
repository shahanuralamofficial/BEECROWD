#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];

        if (x[i] < i)
        {
            cout << "Menor valor: " << x[i] << "\n"
                 << "Posicao: " << i << "\n";
        }
    }
    return 0;
}