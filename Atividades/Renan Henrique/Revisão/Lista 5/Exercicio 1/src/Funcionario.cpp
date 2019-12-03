#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
    fSalario = 0;
    sCargo = " ";
}

Funcionario::~Funcionario()
{
    //dtor
}
void Funcionario::setSalario()
{
    float f;
    cout << "Qual salario recebe: ";
    cin >> f;
    fSalario = f;
}
void Funcionario::setCargo()
{
    string c;
    cout << "Qual o cargo exercido? ";
    getline(cin, c);
    sCargo = c;
}
float Funcionario::getSalario()
{
    return fSalario;
}
string Funcionario::getCargo()
{
    return sCargo;
}
