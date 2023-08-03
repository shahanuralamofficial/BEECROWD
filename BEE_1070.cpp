#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, i = 0;
    cin >> a;
    while (i < 6)
    {
        if (a % 2 != 0)
        {
            cout << a << endl;
            i++;
        }
        a++;
    }
    return 0;
}