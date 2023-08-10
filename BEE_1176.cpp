
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

 long long fib[61]; 
    fib[0] = 0; 
    fib[1] = 1; 
     for (int t = 0; t < T; t++) {
        int N;
        cin >> N;
    for (int i = 2; i <= 60; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
        cout << "Fib(" << N << ") = " << fib[N] << "\n";
    }

    return 0;
}
