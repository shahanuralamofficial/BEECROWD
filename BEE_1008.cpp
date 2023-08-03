#include <bits/stdc++.h>
using namespace std;
int main()
{
    int NUMBER, hours;
    float amount, SALARY;

    cin >> NUMBER >> hours >> amount;

    SALARY = hours * amount;

    cout << "NUMBER = " << NUMBER << endl;

    cout << fixed << setprecision(2) << "SALARY = U$ " << SALARY << endl;

    return 0;
}
