#include "Cliente.h"
#include <iostream>
#include <locale.h>
#include <cstdlib>


using namespace std;

Cliente::Cliente()
{
    //ctor
    Id=0;

    Idade=0;

}

Cliente::~Cliente()
{
    //dtor
}

void Cliente::setId(int a)
{
    Id=a;
}

void Cliente::setNome(string b)
{
    Nome=b;
}

void Cliente::setIdade(int c)
{
    Idade=c;
}

void Cliente::setEmail(string d)
{
    Email=d;
}

void Cliente::setCidade(string e)
{
    Cidade=e;
}

int Cliente::getId()
{
    return Id;
}

string Cliente::getNome()
{
    return Nome;
}

int Cliente::getIdade()
{
    return Idade;
}

string Cliente::getEmail()
{
    return Email;
}

string Cliente::getCidade()
{
    return Cidade;
}

