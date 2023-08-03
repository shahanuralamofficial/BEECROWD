#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    double a, b, c, average;
    cout << fixed << setprecision(1);
    int d;
    cin >> d;

    for (int i = 1; i <= d; i++)
    {
        cin >> a >> b >> c;

        average = ((a * 2 + b * 3 + c * 5) / (2.0 + 3.0 + 5.0));

        cout << average << "\n";
    }

    return 0;
}