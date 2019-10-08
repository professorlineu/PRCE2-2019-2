#include "Juridica.h"

Juridica::Juridica()
{
    this->Cnpj = "";
}

Juridica::~Juridica()
{
    //dtor
}

void Juridica::setCnpj(string c)
{
    this->Cnpj = c;
}

string Juridica::getCnpj() const
{
    return this->Cnpj;
}
