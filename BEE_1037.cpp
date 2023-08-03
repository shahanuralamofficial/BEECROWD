#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;

    if (n < 0.0000 && n > 100.0000)
    {
        cout << "Fora de intervalo\n";
    }
    else if (n >= 0.0000 && n <= 25.0000)
    {
        cout << "Intervalo [0,25]\n";
    }
    else if (n >= 25.00001 && n <= 50.0000000)
    {
        cout << "Intervalo (25,50]\n";
    }
    else if (n >= 50.00001 && n <= 100.0000000)
    {
        cout << "Intervalo (75,100]\n";
    }
    else
    {
        cout << "Fora de intervalo\n";
    }

    return 0;
}