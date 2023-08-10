#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, x, y, sum;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> x >> y;
        sum = 0;
        while (y != 0)
        {
            if (x % 2 != 0)
            {
                sum += x;
                y--;
            }
            x++;
        }
        cout << sum << endl;
    }

    return 0;
}