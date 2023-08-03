#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        cin >> a;
        if (a == 0)
        {
            cout << "NULL\n";
        }
        if (a > 0 && a % 2 == 0)
        {
            cout << "EVEN POSITIVE\n";
        }
        else if (a < 0 && a % 2 == 0)
        {
            cout << "EVEN NEGATIVE\n";
        }
        if (a > 0 && a % 2 != 0)
        {
            cout << "ODD POSITIVE\n";
        }
        if (a < 0 && a % 2 != 0)
        {
            cout << "ODD NEGATIVE\n";
        }
    }

    return 0;
}