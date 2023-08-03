#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n, extra;
     cin >> n;

     cout << n << "\n";

     cout << n / 100 << " nota(s) de R$ 100,00"
          << "\n";
     extra = (n % 100);
     cout << extra / 50 << " nota(s) de R$ 50,00"
          << "\n";
     extra = (extra % 50);
     cout << extra / 20 << " nota(s) de R$ 20,00"
          << "\n";
     extra = (extra % 20);
     cout << extra / 10 << " nota(s) de R$ 10,00"
          << "\n";
     extra = (extra % 10);
     cout << extra / 5 << " nota(s) de R$ 5,00"
          << "\n";
     extra = (extra % 5);
     cout << extra / 2 << " nota(s) de R$ 2,00"
          << "\n";
     extra = (extra % 2);
     cout << extra / 1 << " nota(s) de R$ 1,00"
          << "\n";
     extra = (extra % 1);

     return 0;
}