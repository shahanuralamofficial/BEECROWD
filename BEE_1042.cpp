#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, num3, d;
    int ace[3];

    cin >> num1 >> num2 >> num3;

    ace[0] = num1;
    ace[1] = num2;
    ace[2] = num3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (ace[i] < ace[j])
            {
                d = ace[j];
                ace[j] = ace[i];
                ace[i] = d;
            }
        }
    }
    cout << ace[0] << endl
         << ace[1] << endl
         << ace[2] << endl;
    cout << endl;
    cout << num1 << endl
         << num2 << endl
         << num3 << endl;

    return 0;
}