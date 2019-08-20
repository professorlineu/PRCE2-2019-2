/**********************************************************
- Autor:     Jéssica Assis
- Descrição: Revisão: Estrutura de decisão - Ex 8, cap 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iSal = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << " Insira seu Salário: ";
    cin >> iSal;

    if (iSal <= 300 && iSal>0)
    {
        cout << "Seu Salário Reajustado é: " << iSal * 1.35 ;
    }
    else if (iSal > 300 && iSal > 0)

    {
        cout << "Seu Salário Reajustado é: "<< iSal* 1.15;
    }

    else;

}
