#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n[10], p;
    cin >> p;
    for (int i = 0; i < 10; i++)
    {

        n[i] = p;
        cout <<"N["<<i<<"] = "<< p <<endl;
        p = p * 2;
   
    }
    return 0;
}