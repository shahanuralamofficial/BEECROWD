#include <bits/stdc++.h>
using namespace std;
int main()
{
    int day, year, month;

    cin >> day;

    year = day / 365;
    day = day - (year * 365);
    month = day / 30;
    day = day - (month * 30);

    cout << year << " ano(s)"
         << "\n"
         << month << " mes(es)"
         << "\n"
         << day << " dia(s)"
         << "\n";

    return 0;
}