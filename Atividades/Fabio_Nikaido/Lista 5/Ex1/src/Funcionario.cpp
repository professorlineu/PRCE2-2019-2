#include "Funcionario.h"

#include <iostream>
#include <string>
using namespace std;

Funcionario::Funcionario()
{
    Salario = 0;
    Cargo = ' ';
}

Funcionario::~Funcionario()
{

}


void Funcionario::setSalario(int s)
{
    if(s<=0)
    {
        while(s<=0)
        {
            cout << "Sal�rio Inv�lido" << endl;
            cout << "Digite o sal�rio: ";
            cin >> s;
        }

        Salario = s;
    }

    else
    {
        Salario = s;
    }
}

int Funcionario::getSalario()
{
    return Salario;
}

void Funcionario::setCargo(string c)
{
    Cargo = c;
}

string Funcionario::getCargo()
{
    return Cargo;
}
