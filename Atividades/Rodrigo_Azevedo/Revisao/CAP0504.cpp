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
    int iNumero = 0;
    int iTabuada = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Insira um número: ";
    cin >> iNumero;
    while (iTabuada <= 10)
    {
        cout << iNumero << " * " << iTabuada << " = " << iNumero * iTabuada << endl;
        iTabuada++;
    }


    return 0;
}
