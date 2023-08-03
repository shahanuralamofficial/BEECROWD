#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cout << i << " " << i * i << " " << i * i * i << "\n";
        cout << i << " " << i * i + 1 << " " << i * i * i + 1 << "\n";
    }
    return 0;
}