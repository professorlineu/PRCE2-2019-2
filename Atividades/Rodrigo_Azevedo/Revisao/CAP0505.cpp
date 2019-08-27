/**********************************************************
- Autor:     Rodrigo Braz de Azevedo
- Descrição:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iNumero = 1;
    int iTabuada = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    while (iNumero <= 10)
    {
        cout << iNumero << " * " << iTabuada << " = " << iNumero * iTabuada << endl;
        iTabuada++;
        if (iTabuada > 10)
        {
            iNumero++;
            iTabuada = 0;
            cout << endl;
        }
    }


    return 0;
}
