#include "Pessoa.h"

Pessoa::Pessoa()
{

}

Pessoa::~Pessoa()
{

}

void Pessoa::setNome(string n)
{
    Nome = n;
}

string Pessoa::getNome()
{
    return Nome;
}

void Pessoa::setEndereco(string e)
{
    Endereco = e;
}

string Pessoa::getEndereco()
{
    return Endereco;
}

void Pessoa::setDataNascimento(int d)
{
    DataNascimento = d;
}

int Pessoa::getDataNascimento()
{
    return DataNascimento;
}
