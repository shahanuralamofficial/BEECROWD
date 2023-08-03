#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    double result;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cin >> b >> c;
        result = (double)b / (double)c;

        cout << fixed << setprecision(1);
        if (c == 0)
        {
            cout << "divisao impossivel\n";
        }

        else
        {
            cout << result << endl;
        }
    }
    return 0;
}