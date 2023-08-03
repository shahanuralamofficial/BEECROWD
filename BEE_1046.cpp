#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, time = 0;
    cin >> a >> b;
    if (b > a)
    {
        time = b - a;
        cout << "O JOGO DUROU " << time << " HORA(S)\n";
    }

    else if (a > b)
    {
        time = 24 - (a - b);
        cout << "O JOGO DUROU " << time << " HORA(S)\n";
    }

    else if (a == b)
    {
        time = 24;
        cout << "O JOGO DUROU " << time << " HORA(S)\n";
    }
    return 0;
}