/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descrição: Lista 5 - Exercício 16
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int iIdade;
    int iSoma = 0;
    int iCont = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (iIdade != 0)
    {
        cout << "Digite a idade: ";
        cin >> iIdade;

        iSoma = iIdade+iSoma;
        iCont++;
    }

    cout << "A média entre as idade é: " << iSoma/(iCont-1) << endl;


    return 1;
}
