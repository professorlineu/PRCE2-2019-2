/**********************************************************
- Autor:     Vinicius Soares
- Descrição: Estrutura de Decisão - Cap 5 - Ex 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

   int iNum = 0;
   int iSair = 0;
   int iTabuada [11];

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    while (iSair == 0)
    {
    cout << "Informe um número inteiro para calcular a sua tabuada de 0 a 10!" << endl;
    cin >> iNum;

    iTabuada [0] = 0 * iNum;
    iTabuada [1] = 1 * iNum;
    iTabuada [2] = 2 * iNum;
    iTabuada [3] = 3 * iNum;
    iTabuada [4] = 4 * iNum;
    iTabuada [5] = 5 * iNum;
    iTabuada [6] = 6 * iNum;
    iTabuada [7] = 7 * iNum;
    iTabuada [8] = 8 * iNum;
    iTabuada [9] = 9 * iNum;
    iTabuada [10] = 10 * iNum;

    cout << "A tabuada de " << iNum << " é: " << endl;
    cout << iTabuada[0] << endl;
    cout << iTabuada[1] << endl;
    cout << iTabuada[2] << endl;
    cout << iTabuada[3] << endl;
    cout << iTabuada[4] << endl;
    cout << iTabuada[5] << endl;
    cout << iTabuada[6] << endl;
    cout << iTabuada[7] << endl;
    cout << iTabuada[8] << endl;
    cout << iTabuada[9] << endl;
    cout << iTabuada[10] << endl;

    cout << "Deseja calcular outra tabuada? Digite 1 para sair ou 0 para continuar" << endl;
    cin >> iSair;

    if (iSair == 1)
    {
    break;
    }
    }
    }
