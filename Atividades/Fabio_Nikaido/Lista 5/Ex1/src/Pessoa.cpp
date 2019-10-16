#include "Pessoa.h"

Pessoa::Pessoa()
{
    Nome = " ";
    Endereco = " ";
    DataNascimento = 0;
}

Pessoa::~Pessoa()
{

}

void Pessoa::setNome(string n)
{
    Nome = n;
}

string Pessoa::getNome() const
{
    return Nome;
}

void Pessoa::setEndereco(string e)
{
    Endereco = e;
}

string Pessoa::getEndereco() const
{
    return Endereco;
}

void Pessoa::setDataNascimento(int d)
{
    DataNascimento = d;
}

int Pessoa::getDataNascimento() const
{
    return DataNascimento;
}
