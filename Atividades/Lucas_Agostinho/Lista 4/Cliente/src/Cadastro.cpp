#include "Cadastro.h"
#include <string>

using namespace std;

Cadastro::Cadastro()
{
    ID = 0;
    Nome = "";
    Idade = 0;
    Email = "";
    Cidade = "";
}

Cadastro::~Cadastro()
{

}

//setters
void Cadastro::setID(int id)
{
    ID = id;
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

//getters
int Cadastro::getID()
{
    return ID;
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
