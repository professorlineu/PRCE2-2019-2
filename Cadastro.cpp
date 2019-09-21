#include "Cadastro.h"
#include <string>

using namespace std;

Cadastro::Cadastro()
{
    //ctor
    Idade = 0;
    Identidade = 0;
    Cidade = "";
    Nome = "";
    Email = "";
}

Cadastro::~Cadastro()
{
    //dtor
}

void Cadastro::setIdentidade(int id)
{
    Identidade = id;
}

void Cadastro::setNome(string n)
{
    Nome = n;
}

void Cadastro::setIdade(int i)
{
    Idade = i;
}

void Cadastro::setEmail(string e)
{
    Email = e;
}

void Cadastro::setCidade(string c)
{
    Cidade = c;
}



int Cadastro::getIdentidade()
{
    return Identidade;
}

string Cadastro::getNome()
{
    return Nome;
}

int Cadastro::getIdade()
{
    return Idade;
}

string Cadastro::getEmail()
{
    return Email;
}

string Cadastro::getCidade()
{
    return Cidade;
}

void Cadastro::getSaidaDeDados()
{
    //cout << Identidade << Nome << Idade << Email << Cidade;
}
