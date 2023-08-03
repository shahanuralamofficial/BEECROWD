#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, N;
    int sum = 0;
    cin >> A >> N;
    while (N < 0 || N == 0)
    {
        cin >> N;
    }
    for (int i = 0; i < N; i++)
    {

        sum = sum+i+A ;
    }

    cout << sum << endl;
    return 0;
}