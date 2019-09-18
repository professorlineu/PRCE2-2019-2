/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Múltiplos de [2], [3] e [2 e 3]
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    ///Declaração de variáveis
    int num[7];
    int i = 0;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    for (i = 0; i < 7; i++)
    {
        cout << "Insira o " << (i + 1) << "º valor: ";
        cin >> num[i];
    }

    cout << "\nMúltiplos de 2: ";
    for (i = 0; i < 7; i++)
    {
        if (num[i] % 2 == 0)
        {
            cout << "[" << num[i] << "] ";
        }
    }

    cout << "\nMúltiplos de 3: ";
    for (i = 0; i < 7; i++)
    {
        if (num[i] % 3 == 0)
        {
            cout << "[" << num[i] << "] ";
        }
    }

    cout << "\nMúltiplos de 2 e 3: ";
    for (i = 0; i < 7; i++)
    {
        if (num[i] % 2 == 0 && num[i] % 3 == 0)
        {
            cout << "[" << num[i] << "] \n";
        }
    }

    return 0;
}
