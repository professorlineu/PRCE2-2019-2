/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Maior número
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Insira o primeiro número: ";
    cin >> num1;

    cout << "Insira o segundo número: ";
    cin >> num2;

    cout << "Insira o terceiro número: ";
    cin >> num3;

    cout << endl;
    if (num1 > num2 && num1 > num3)
    {
        cout << "O maior número é: " << num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "O maior número é: " << num2;
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << "O maior número é: " << num3;
    }
    cout << endl;

    return 0;
}
