/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descrição: Lista 8 - Exercício 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int media(int valor, int iContador)
{
   cout << "A média aritmética entre os valores é: " << valor/(iContador-1) << endl;
}


int main()
{

    //Declaração de variáveis

    int iCont=0;
    int iNum;
    int iSoma=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while(iNum != 0)
    {
        cout << "Digite um número positivo: ";
        cin >> iNum;

        iSoma = iSoma + iNum;
        iCont++;
    }

    media(iSoma,iCont);



    return 1;
}

