#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    int p = 0;

    for (int a = 1; a <= 6; a++)
    {
        cin >> n;
        if (n > 0)
        {
            p++;
        }
    }
    cout << p << " valores positivos" << endl;
    return 0;
}