#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    int h, m;
    cin >> s;
    h = s / 3600;
    s = s - (h * 3600);
    m = s / 60;
    s = s - (m * 60);

    cout << h << ":" << m << ":" << s << "\n";
    return 0;
}