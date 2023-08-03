#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j;
    i = 1;
    for (j = 60; j >= 0; j -= 5)
    {
        cout << "I=" << i << " J=" << j << "\n";
        i += 3;
    }

    return 0;
}