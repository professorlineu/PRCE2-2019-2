#include "ContaBancaria.h"

ContaBancaria::ContaBancaria()
{
    //ctor
    Saldo = 0;
}

ContaBancaria::~ContaBancaria()
{
    //dtor
}

void ContaBancaria::Credito()
{
    bool i = 1;
    double y;
    double x;
    cout << "Insira o valor que você quer inserir em sua conta: ";
    cin >> x;

        while (i == 1)
        {
    if (x < 0)
    {
        cout << "Valor inválido, inserir novamente: ";
        cin >> x;
    }
    else {
        i = 0;
    }
        }

    y = Saldo;
    Saldo = x+y;
}

void ContaBancaria::Debito()
{
    bool j = 1;
    double s;
    double r;
    s = Saldo;
    cout << "Insira o valor que o você deseja retirar da sua conta: ";
    cin >> r;

    while (j == 1)
        {
    if(r>s)
    {
        cout << "Valor ultrapassa seu saldo atual, insira uma quantia possível: ";
        cin >> r;
    }
    else {
        j = 0;
    }
        }
    Saldo = s-r;
}

void ContaBancaria::getSaldo()
{
    cout << "Seu saldo atual é: R$" << Saldo << endl;
}

int ContaBancaria::Sair()
{
    return 1;
}
