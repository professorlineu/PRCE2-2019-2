/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Soma pares e ímpares
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    ///Declaração de variáveis
    int num[10];
    int somaPar = 0;
    int somaImpar = 0;
    int i = 0;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    for (i = 0; i < 10; i++)
    {
        cout << "Insira o " << (i + 1) << "º valor: ";
        cin >> num[i];

        if (num[i] % 2 == 0)
        {
            somaPar += num[i];
        }
        else
        {
            somaImpar += num[i];
        }
    }

    cout << "\nSoma dos números pares: " << somaPar << endl;
    cout << "Soma dos números ímpares: " << somaImpar << endl;


    return 0;
}
