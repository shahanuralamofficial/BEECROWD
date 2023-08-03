#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, i, e = 0;
    for (i = 1; i <= 5; i++)
    {
        cin >> a;
        if (a % 2 == 0)
        {
            e++;
        }
    }
    cout << e << " valores pares\n";
    return 0;
}