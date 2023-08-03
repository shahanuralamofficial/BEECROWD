#include <bits/stdc++.h>
using namespace std;
int main()
{
    double m[12][12], sum = 0.0;
    int n;
    char x;
    cin >> n >> x;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
            if (j == n)
            {
                sum += m[i][j];
            }
        }
    }

    if (x == 'S')
    {
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (x == 'M')
    {
        cout << fixed << setprecision(1) << sum / 12.0 << endl;
    }
    return 0;
}