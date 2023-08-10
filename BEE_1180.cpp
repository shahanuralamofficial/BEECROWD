#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int min = x[0];
    int minPos = 0;
    
    for (int i = 1; i < n; i++)
    {
        if (min > x[i])
        {
            min = x[i];
            minPos = i;
        }
    }

    cout << "Menor valor: " << min << "\n"
         << "Posicao: " << minPos << "\n";
    
    return 0;
}
