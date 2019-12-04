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
   while(s<=0)
    {
        cout << "\nSalário Inválido, digite um valor válido: ";
        cin >> s;
    }

        Salario = s;
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
