/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descrição: Lista 5 - Exercício 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int iCont = 0;
    int iNum;
    int iTabuada;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite um número: ";
    cin >> iNum;


    while(iCont <= 10)
    {
        iTabuada = iNum*iCont;
        cout << iNum << "x" << iCont << " = " << iTabuada << endl;
        iCont++;
    }

    return 1;
}
