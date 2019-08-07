/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descrição: Fatorial de um número
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

    //Declaração de variáveis
    int iNum = 0;
    int iFat = 0;
    int Fatorial();

int main()
{
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "FATORIAL DE UM NÚMERO" << endl << endl;

    cout << "Digite um número: ";
    cin >> iNum;

    Fatorial();

    return 0;
}

int Fatorial()
{
    for(iFat = 1; iNum > 1; iNum = iNum - 1)
    {
      iFat = iFat * iNum;
    }

    cout << "\nO fatorial do número informado é: " << iFat << endl;

    return 0;
}

