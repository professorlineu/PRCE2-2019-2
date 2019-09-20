#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include "ContaBancaria.h"

using namespace std;

int main()
{
    int conta;
    int opcao;
    int transferir = 0;

    ContaBancaria c1;
    ContaBancaria c2;

    while(conta != 0)
    {
        conta = 0;
        opcao = 1;

        cout << "Digite a conta bancaria que gostaria de utilizar: " << endl << endl;
        cout << "Para acessar a Conta 1, digite 1" << endl;
        cout << "Para acessar a Conta 2, digite 2" << endl;
        cout << "Para sair do programa, digite 0" << endl;
        cin >> conta;

        if(conta == 1)
        {
            while(opcao != 0)
            {
                cout << endl;
                cout << "O que gostaria de fazer? " << endl << endl;
                cout << "Digite 1 para depositar" << endl;
                cout << "Digite 2 para retirar" << endl;
                cout << "Digite 3 para ver o saldo atual" << endl;
                cout << "Digite 4 para transferir" << endl;
                cout << "Digite 0 para voltar" << endl;
                cin >> opcao;

                if(opcao == 1)
                {
                    c1.credito();
                }
                else if(opcao == 2)
                {
                    c1.debito();
                }
                else if(opcao == 3)
                {
                    c1.getSaldo();
                }
                else if(opcao == 4)
                {
                    cout << "Qual o valor que gostaria de transferir?" << endl;
                    cout << "Valor: ";
                    cin >> transferir;

                    c1.transferirDe(transferir);
                    c2.transferirPara(transferir);
                }
                else if (opcao == 0){}
                else
                {
                    cout << "Comando Inválido. Tente Novamente" << endl;
                }
            }
        }

        if(conta == 2)
        {
            while(opcao != 0)
            {
                cout << endl;
                cout << "O que gostaria de fazer? " << endl << endl;
                cout << "Digite 1 para depositar" << endl;
                cout << "Digite 2 para retirar" << endl;
                cout << "Digite 3 para ver o saldo atual" << endl;
                cout << "Digite 4 para transferir" << endl;
                cout << "Digite 0 para voltar" << endl;
                cin >> opcao;

                if(opcao == 1)
                {
                    c2.credito();
                }
                else if(opcao == 2)
                {
                    c2.debito();
                }
                else if(opcao == 3)
                {
                    c2.getSaldo();
                }
                else if(opcao == 4)
                {
                    cout << "Qual o valor que gostaria de transferir?" << endl;
                    cout << "Valor: ";
                    cin >> transferir;

                    c2.transferirDe(transferir);
                    c1.transferirPara(transferir);

                }
                else if (opcao == 0){}
                else
                {
                    cout << "Comando Inválido. Tente Novamente" << endl;
                }

            }
        }
    }



    return 0;
}
