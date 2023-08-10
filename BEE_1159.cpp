#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, x, sum;
    while (true)
    {
       
        cin >> x;
        if (x == 0)
        {
            break;
        }
        else if (x % 2 != 0)
        {
            x++;
        }
         sum = 0;
        for (i = 1; i <= 5; i++)
        {
            sum += x;
            x += 2;
        }
        cout << sum << endl;
    }

    return 0;
}