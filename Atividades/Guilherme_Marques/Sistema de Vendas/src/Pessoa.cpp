#include "Pessoa.h"

Pessoa::Pessoa()
{
    this->Nome = "";
}

Pessoa::~Pessoa()
{

}

void Pessoa::setNome(string n)
{
    this->Nome = n;
}

string Pessoa::getNome() const
{
    return this->Nome;
}
