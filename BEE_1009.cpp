#include <bits/stdc++.h>

using namespace std;

int main()
{

    string name;
    double salary, soldamount, total, result;
    getline(cin, name);
    cin >> salary;
    cin >> soldamount;
    total = (soldamount * 15) / 100;
    result = salary + total;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << result << endl;
    return 0;
}