#include <bits/stdc++.h>
using namespace std;
int main()
{
    int meter1, meter2, meter3;
    int pi;

    while (true)
    {
        cin >> meter1;
        if (meter1 == 0)
        {
            break;
        }
    }
    cin >> meter2 >> meter3;
    pi = sqrt(meter1 * meter2 * 100 / meter3);
    cout << pi << endl;
    return 0;
}
