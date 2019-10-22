#include <iostream>
#include <string>
#include "Funcionario.h"
using namespace std;

Funcionario::Funcionario()
{
    //ctor
}

Funcionario::~Funcionario()
{
    //dtor
}


void Funcionario::setCargo(string c)
{
    sCargo=c;
}

void Funcionario::setSalario(float s)
{
    fSalario=s;
}

string Funcionario::getCargo()
{
    return sCargo;
}

float Funcionario::getSalario()
{
    return fSalario;
}
