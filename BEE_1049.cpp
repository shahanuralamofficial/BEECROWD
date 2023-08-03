#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    if (a == "vertebrado" && b == "mamifero" && c == "onivoro")
    {
        cout << "homem\n";
    }
    else if (a == "vertebrado" && b == "mamifero" && c == "herbivoro")
    {
        cout << "vaca\n";
    }
    else if (a == "vertebrado" && b == "ave" && c == "carnivoro")
    {
        cout << "aguia\n";
    }
    else if (a == "vertebrado" && b == "ave" && c == "onivoro")
    {
        cout << "pomba\n";
    }

    else if (a == "invertebrado" && b == "anelideo" && c == "onivoro")
    {
        cout << "minhoca\n";
    }
    else if (a == "invertebrado" && b == "anelideo" && c == "hematofago")
    {
        cout << "sanguessuga\n";
    }
    else if (a == "invertebrado" && b == "inseto" && c == "hematofago")
    {
        cout << "pulga\n";
    }
    else if (a == "invertebrado" && b == "inseto" && c == "herbivoro")
    {
        cout << "lagarta\n";
    }
    return 0;
}