/**********************************************************
- Autor:     Jéssica Assis
- Descrição: Revisão - Estrutura de Repetição EX 25 CAP 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iCod = 0, iOp = 0;
    float fValor = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Olá seja bem vindo ao nosso sistema!\n";
    do
    {

        cout << "insira o seu código: ";
        cin >> iCod;
        if (iCod > 0)
        {
            cout << "\n\nEscolha a Opção de Investimento\n 1-\tPoupança\n 2-\tPoupança Plus\n 3-\tFundos de Renda Fixa\n 0-\tSair\n";
            cin >> iOp;

            cout << "\nQual Valor será investido: ";
            cin >> fValor;
        }



        switch (iOp)
        {
        case 1:
            cout << "O total investido é R$"<< fValor << ",sendo o juros de R$" << fValor*0.015 << endl;
            break;

        case 2:
            cout << "O total investido é R$"<< fValor << ",sendo o juros de R$" <<fValor*0.02 << endl;
            break;

        case 3:
            cout << "O total investido é R$"<< fValor << ",sendo o juros de R$" << fValor*0.04 << endl;
            break;

        case 0:
            cout << "Sair";
            break;
        }

    }
    while (iCod > 0);
    return 0;

}
