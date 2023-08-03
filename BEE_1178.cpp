#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n[100], p;
    cin >> p;
    
    cout << fixed << setprecision(4);

    for (int i = 0; i < 100; i++)
    {
        cout << "N[" << i << "] = " << p << endl;
        p = p / 2;
    }
    return 0;
}