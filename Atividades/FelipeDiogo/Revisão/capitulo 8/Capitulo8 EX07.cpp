/**********************************************************
- Autor:     Felipe Diogo e Letiele
- Descrição: DO WHILE
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    double inumero = 0;
    double ivalor = 0;
    double dmedia = 0;
    double x = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    do
        // Dados para serem inseridos
    {

        cout << "Digite um número inteiro , ou zero para calcular a média dos valores já digitados" << endl;
        cin >> inumero;


        ivalor++;

        x = x + inumero;



    }

        while (inumero != 0);

        dmedia = x / (ivalor - 1 );

        cout << "a média é de " << dmedia <<  endl;



    return 0;
}
