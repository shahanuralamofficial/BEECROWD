#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    for(i=1; i<= 10000; i++)
    {
        if(i%a==2)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}