#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        int cons = 0;
        for (int j = 2; j < p; j++)
        {
            if (p % j == 0)
            {
                cons++;
                break;
            }
        }
        if (cons == 0)
        {
            cout << p << " eh primo\n";
        }
        else
        {
            cout << p << " nao eh primo\n";
        }
    }

    return 0;
}