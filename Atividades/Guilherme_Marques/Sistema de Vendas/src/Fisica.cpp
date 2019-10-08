#include "Fisica.h"

Fisica::Fisica()
{
    this->Cpf = "";
}

Fisica::~Fisica()
{

}

void Fisica::setCpf(string c)
{
    this->Cpf = c;
}

string Fisica::getCpf() const
{
    return this->Cpf;
}
