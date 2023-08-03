#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, z, sum = 0, n = 0;
    cin >> x >> z;
    while (z < x || z == x)
    {
        cin >> z;
    }

    for (int i = x; sum < z; i++)
    {
        sum = (sum + x) + 1;
        n++;
    }

    cout << n << endl;
    return 0;
}
