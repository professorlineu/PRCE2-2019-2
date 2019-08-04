/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descrição: Lista 6 - Exercício 12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int vetor [5];
    int iSoma = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

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


    for(int i=0;i<=4;i++)
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


    return 1;
}
