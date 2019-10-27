/**********************************************************
- Autor:     Layane Quissak
- Descrição: Capítulo 6- Ex 12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int vetor [5];
    int iSoma = 0;

    setlocale(LC_ALL,"");
    system("color F1");
    cout << "Digite o primeiro número: ";
    cin >> vetor[0];

    cout << "Digite o segundo número: ";
    cin >> vetor[1];

    cout << "Digite o terceiro número: ";
    cin >> vetor[2];

    cout << "Digite o quarto número: ";
    cin >> vetor[3];

    cout << "Digite o quinto número: ";
    cin >> vetor[4];

    cout << "Os números digitados foram: ";


    for(int i=0; i<=4; i++)
    {
        if(i<4)
        {
            cout << vetor[i] << " + ";
        }
        else
        {
            cout << vetor[i];
        }
        iSoma = vetor[i] + iSoma;
    }

    cout << " = " << iSoma << endl;

}
