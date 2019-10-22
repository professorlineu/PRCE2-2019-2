#include <iostream>
#include <string>
#include "Pessoa.h"
using namespace std;

Pessoa::Pessoa()
{
    //ctor
}

Pessoa::~Pessoa()
{
    //dtor
}

void Pessoa::setNome(string n)
{
    sNome=n;
}

void Pessoa::setEndereco(string e)
{
    sEndereco=e;
}

void Pessoa::setNascimento(int d, int m, int a)
{
    iDia=d;
    iMes=m;
    iAno=a;
}

string Pessoa::getNome()
{
    return sNome;
}

string Pessoa::getEndereco()
{
    return sEndereco;
}

int Pessoa::getNascimento()
{
    cout << iDia << "/" << iMes << "/" << iAno;
}


