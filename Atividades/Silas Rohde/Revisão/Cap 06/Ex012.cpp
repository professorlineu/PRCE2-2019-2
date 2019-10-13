/**********************************************************
- Autor:     Silas Barboza Rohde
- Descrição: Lista de revisão - Cap06 ex 12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;


int main()
{
//Declaração de variáveis:

    int iVetor [5];


//Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "\nDigite o 1º número: ";
    cin >> iVetor [0];

    cout << "\nDigite o 2º número: ";
    cin >> iVetor [1];

    cout << "\nDigite o 3º número: ";
    cin >> iVetor [2];

    cout << "\nDigite o 4º número: ";
    cin >> iVetor [3];

    cout << "\nDigite o 5º número: ";
    cin >> iVetor [4];

    cout << "\nOs números digitados foram: " << iVetor [0] << " + " << iVetor [1] << " + " << iVetor [2] << " + " << iVetor [3] << " + " << iVetor [4] << " = " << iVetor[0]+iVetor[1]+iVetor[2]+iVetor[3]+iVetor[4] << endl;

    return 0;
}
