#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, s, c, max, mairab;
    cin >> a;
    cin >> b;
    cin >> c;

    mairab = (a + b + abs(a - b)) / 2;
    max = (mairab + c + abs(mairab - c)) / 2;

    cout << max << " eh o maior"
         << "\n";

    return 0;
}