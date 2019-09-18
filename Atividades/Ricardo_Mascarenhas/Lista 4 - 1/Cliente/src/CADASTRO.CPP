#include "Cadastro.h"
#include <string>

using namespace std;

Cadastro::Cadastro()
{
    ID = 0 ;
    Nome = " " ;
    Idade = 0 ;
    Email = " " ;
    Cidade = " " ;
}

Cadastro::~Cadastro()
{
    //dtor
}
void Cadastro::setID(int id)
{
    ID = id ;
}
void Cadastro::setNome(string N)
{
    Nome = N ;
}
void Cadastro::setIdade(int I)
{
    Idade = I ;
}
void Cadastro::setEmail(string E)
{
    Email = E ;
}
void Cadastro::setCidade(string C)
{
    Cidade = C ;
}
//***************************************************************************************************************
int Cadastro::getID()
{
    return ID;
}
string Cadastro::geNome()
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
