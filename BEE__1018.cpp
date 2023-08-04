#include <bits/stdc++.h>
using namespace std;

int main()
{
    int note[7] = {100, 50, 20, 10, 5, 2, 1};
    int num, temp, bank_note, i;
    cin >> num;
    cout << num << endl;
    for (i = 0; i < 7; i++)
    {
        temp = num % note[i];
        bank_note = num / note[i];
        printf("%d nota(s) de R$ %d,00\n", bank_note, note[i]);
        num = temp;
    }
}