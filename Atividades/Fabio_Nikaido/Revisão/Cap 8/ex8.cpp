/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descrição: Lista 8 - Exercício 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int fatorial(int iCalculo)
{
   int iCont=1;
   int iFatorial=0;

   int iCalculo2 = iCalculo;

    while(iCont<iCalculo2)
    {
        iCalculo = iCont*iCalculo;
        iCont++;
    }

   cout << "O fatorial de " << iCalculo << " é: " << iCalculo;
}


int main()
{

    //Declaração de variáveis

    int valor;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite um número inteiro e positivo: ";
    cin >> valor;

    fatorial(valor);

    return 1;
}

