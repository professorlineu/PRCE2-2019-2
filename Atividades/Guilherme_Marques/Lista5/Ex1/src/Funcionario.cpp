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
        cout << "\nSal�rio Inv�lido, digite um valor v�lido: ";
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
