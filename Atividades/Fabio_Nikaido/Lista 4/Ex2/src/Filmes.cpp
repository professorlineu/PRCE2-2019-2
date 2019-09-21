#include "Filmes.h"
#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>

using namespace std;
Filmes::Filmes()
{
    ID = 0;
    ano = 0;
}

Filmes::~Filmes()
{
    //dtor
}

void Filmes::setID(int a)
{
    ID=0;
    ID=a;
}

void Filmes::setNome(string b)
{
    nome=b;
}

void Filmes::setAno(int c)
{
    while(c>2019)
    {
        cout << "Ano Inválido" << endl;
        cout << "Digite o ano de lancamento: ";
        cin >> c;
    }

    ano=c;
}

int Filmes::getID()
{
    return ID;
}

string Filmes::getNome()
{
    return nome;
}

int Filmes::getAno()
{
    return ano;
}


