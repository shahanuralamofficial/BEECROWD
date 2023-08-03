#include <bits/stdc++.h>
using namespace std;

int main()
{
     double note;
     cin >> note;

     cout << "NOTAS:"
          << "\n";
     int x = note / 100;
     cout << x << " nota(s) de R$ 100.00" << endl;

     note = note - (x * 100);
     x = note / 50;
     cout << x << " nota(s) de R$ 50.00" << endl;

     note = note - (x * 50);
     x = note / 20;
     cout << x << " nota(s) de R$ 20.00" << endl;

     note = note - (x * 20);
     x = note / 10;
     cout << x << " nota(s) de R$ 10.00" << endl;

     note = note - (x * 10);
     x = note / 5;
     cout << x << " nota(s) de R$ 5.00" << endl;

     note = note - (x * 5);
     x = note / 2;
     cout << x << " nota(s) de R$ 2.00" << endl;

     cout << "MOEDAS:"
          << "\n";
     note = note - (x * 2);
     x = note / 1;
     cout << x << " moeda(s) de R$ 1.00" << endl;

     note = note - (x * 1);
     x = note / 0.5;
     cout << x << " moeda(s) de R$ 0.50" << endl;

     note = note - (x * 0.5);
     x = note / 0.25;
     cout << x << " moeda(s) de R$ 0.25" << endl;

     note = note - (x * 0.25);
     x = note / 0.10;
     cout << x << " moeda(s) de R$ 0.10" << endl;

     note = note - (x * 0.10);
     x = note / 0.05;
     cout << x << " moeda(s) de R$ 0.05" << endl;

     note = note - (x * 0.05);
     x = round(note / 0.01);
     cout << x << " moeda(s) de R$ 0.01" << endl;

     return 0;
}