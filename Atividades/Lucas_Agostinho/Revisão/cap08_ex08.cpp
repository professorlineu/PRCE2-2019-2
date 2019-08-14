/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Fatorial
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

double fatorial (double dNumFat);

int main()
{
    ///Declaração de variáveis
    double dNum = 0;
    double dFat = 0;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    cout << "Insira um número para o fatorial: ";
    cin >> dNum;

    dFat = fatorial (dNum);

    cout << "\nO fatorial de " << dNum << " é: " << dFat << endl;

    return 0;
}

double fatorial (double dNumFat)
{
    double i = 0;
    double dFatorial = 1;

    for (i = 1; i <= dNumFat; i++)
    {
        dFatorial *= i;
    }

    return dFatorial;
}
