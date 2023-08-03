#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, sum = 0;
    cin >> a >> b;

    if (a > b)
    {
        c = b;
        b = a;
        a = c;
    }

    for (int i = a; i <= b; i++)
    {
        if (i % 13 != 0)
            sum += i;
    }
    cout << sum << endl;
    return 0;
}
