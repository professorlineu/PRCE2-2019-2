/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Tabuada
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int numTab = 0;
    int i = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Insira um número para a tabuada: ";
    cin >> numTab;

    cout << endl;

    for (i = 0; i < 11; i++)
    {
        cout << numTab << " x " << (i) << " = " << (numTab * i) << endl;
    }


    return 0;
}
