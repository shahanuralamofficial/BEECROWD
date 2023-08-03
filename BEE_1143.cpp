#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cout << i << " " << pow(i, 2) << " " << pow(i, 3) << "\n";
    }
    return 0;
}