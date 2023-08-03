#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n;
    cin >> k;

    for (int j = 1; j <= k; j++)
    {
        cin >> n;
        int sum = 0;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }

        if (sum - n == n)
        {
            cout << n << " eh perfeito\n";
        }
        else
        {
            cout << n << " nao eh perfeito\n";
        }
    }

    return 0;
}
