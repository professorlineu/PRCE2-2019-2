/************************************************
Nome: Ricardo Mascarenhas
Banco
************************************************/

#include <iostream>
#include "CONTA.h"
#include <cstdlib>
#include <locale.h>
#include <string>
#include <cstdlib>


using namespace std;

int main()
{
    CONTA C1;
    int iOp = 0;
    double dSaldo = 0;
    double dCred = 0 ;

    cout << "BANCO!" << endl;

    cout << "\n" ;

    cout << "Informe o seu saldo: R$ " ;
    cin >> dSaldo ;
    C1.setSaldo(dSaldo);



    cout << "OPÇÕES: " << endl ;

    cout << "1- Crédito \n 2- Débito \n 3- Aplicação " ;
    cout << "\n" ;
    cin >> iOp ;

    switch (iOp)
    {
        case 1:
        cout << "Informe o valor a ser creditado em sua conta: R$";
        cin >> dCred ;
        C1.setCredito(dCred);

        cout << "\n" ;

        cout << "SALDO ATUAL: R$ " << C1.getCredito();
        break ;

        case 2:
        C1.setDebito();
        break ;

        case 3:
        C1.setAplica();
        break ;


        default:
            cout << "Opção não existente! " ;
    }






    return 0;
}
