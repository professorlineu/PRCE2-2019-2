/**********************************************************
- Autor:     Silas Barboza Rohde
- Descri��o: Lista de revis�o - Cap06 ex 12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;


int main()
{
//Declara��o de vari�veis:

    int iVetor [5];


//Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << "\nDigite o 1� n�mero: ";
    cin >> iVetor [0];

    cout << "\nDigite o 2� n�mero: ";
    cin >> iVetor [1];

    cout << "\nDigite o 3� n�mero: ";
    cin >> iVetor [2];

    cout << "\nDigite o 4� n�mero: ";
    cin >> iVetor [3];

    cout << "\nDigite o 5� n�mero: ";
    cin >> iVetor [4];

    cout << "\nOs n�meros digitados foram: " << iVetor [0] << " + " << iVetor [1] << " + " << iVetor [2] << " + " << iVetor [3] << " + " << iVetor [4] << " = " << iVetor[0]+iVetor[1]+iVetor[2]+iVetor[3]+iVetor[4] << endl;

    return 0;
}
