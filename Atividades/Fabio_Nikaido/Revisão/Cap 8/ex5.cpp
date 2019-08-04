/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descrição: Lista 8 - Exercício 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int valor(int iValor)
{
    if (iValor>0)
    {
        cout << "O número é positivo" << endl;
    }
    else if (iValor<0)
    {
        cout << "O número é negativo" << endl;
    }
}


int main()
{

    //Declaração de variáveis

    int iValor1;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite um número inteiro: ";
    cin >> iValor1;

    valor(iValor1);



    return 1;
}

