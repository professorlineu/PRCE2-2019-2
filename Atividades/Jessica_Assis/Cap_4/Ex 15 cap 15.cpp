/**********************************************************
- Autor:     Jéssica Assis
- Descrição: Revisão: Estrutura de decisão - Ex 15, cap 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int  iValor = 0;
    char iOp = 0 ; // a = Poupança b= Renda fixa


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Escolha o tipo de investimento: \na-Poupança\nb-Fundos de Renda Fixa\n\n";
    cin >> iOp;

    switch (iOp)
    {
    case 'a':
    case 'A':

        cout << "Insira o valor que será investido: ";
        cin >> iValor;
        cout << "\nNesse mês o seu rendimento será de: " << iValor * 1.03 << endl;
        break ;


    case 'b':
    case 'B':

        cout << "Insira o valor que será investido: ";
        cin >> iValor;
        cout << "\nNesse mês o seu rendimento será de: " << iValor * 1.04 << endl;
        break;

    default:
        break;
    }

}
