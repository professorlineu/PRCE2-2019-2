#include "Pessoa.h"

Pessoa::Pessoa()
{
    //ctor
    sNome = " ";
    sEndereco = " ";
    sDataNasc = " ";
}

Pessoa::~Pessoa()
{
    //dtor
}

void Pessoa::setNome(string n)
{
    sNome = n;
}

void Pessoa::setEndereco(string e)
{
    sEndereco = e;
}
void Pessoa::setDataNascimento (string d)
{
    sDataNasc = d;
}
string Pessoa::getNome() const
{
    return sNome;
}
string Pessoa::getEndereco() const
{
    return sEndereco;
}
string Pessoa::getDataNascimento() const
{
    return sDataNasc;
}
