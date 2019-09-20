#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include "ContaBancaria.h"

using namespace std;

ContaBancaria::ContaBancaria()
{
    Saldo=0;
    valor=0;
}

ContaBancaria::~ContaBancaria()
{
    //dtor
}

void ContaBancaria::credito()
{
    cout << "Digite o valor que gostaria de depositar: ";
    cin >> valor;

    Saldo = Saldo+valor;
}

void ContaBancaria::debito()
{
    cout << "Digite o valor que gostaria de retirar: ";
    cin >> valor;

    if(valor>Saldo)
    {
        cout << "Valor do debito superior ao saldo da conta" << endl;
    }
    else
    {
        Saldo = Saldo - valor;
    }
}

double ContaBancaria::getSaldo()
{
    cout << "O seu saldo é: " << Saldo << endl;
}

void ContaBancaria::transferirDe(double a)
{
    Saldo = Saldo - a;
}

void ContaBancaria::transferirPara(double b)
{
    Saldo = Saldo + b;
}
