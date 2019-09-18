/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descrição: Números positivos e negativos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

    //Declaração de variáveis
    int iNum = 0;
    int PosNeg();

int main()
{
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "POSITIVO E NEGATIVO" << endl << endl;

    cout << "Informe um valor: ";
    cin >> iNum;

    PosNeg();

    return 0;
}

    int PosNeg()
{
    if (iNum > 0)
    {
        cout << "\nO número é positivo!" << endl;
    }

    else if (iNum < 0)
    {
        cout << "\nO número é negativo!" << endl;

    }

    else
    {
        cout << "\nNem positivo, nem negativo!" << endl;
    }
}
