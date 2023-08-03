#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n1, n2, n3, n4, n5, media, average;

    cin >> n1 >> n2 >> n3 >> n4;

    cout << fixed << setprecision(1);

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10.0;
    cout << "Media: " << media << endl;

    if (media >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (media < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else
    {
        cout << "Aluno em exame." << endl;

        cin >> n5;
        cout << "Nota do exame: " << n5 << endl;

        average = (media + n5) / 2.0;

        if (average >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << average << endl;
    }

    return 0;
}