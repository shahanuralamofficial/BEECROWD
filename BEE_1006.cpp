#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, C, media;

    cin >> A >> B >> C;

    media = (A / 10 * 2) + (B / 10 * 3) + (C / 10 * 5);

    cout << fixed << setprecision(1) << "MEDIA = " << media << endl;

    return 0;
}
