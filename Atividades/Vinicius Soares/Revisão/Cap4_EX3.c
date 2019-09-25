/**********************************************************
- Autor:     Vinicius Soares
- Descrição: Estrutura de Decisão - Cap 4 - Ex 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNum1 = 0;
    float fNum2 = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Informe um número: ";
    cin >> fNum1;

    cout << "Informe outro número: ";
    cin >> fNum2;


    if (fNum1 > fNum2)
    {
        cout << "O maior número é: " << fNum1 << endl;
    }
    if (fNum1 < fNum2)
    {
        cout << "O maior número é: " << fNum2 << endl;
    }

  if (fNum1 == fNum2)
    {
        cout << "O maior número é: " << fNum2 << endl;
    }
    return 0;
}
