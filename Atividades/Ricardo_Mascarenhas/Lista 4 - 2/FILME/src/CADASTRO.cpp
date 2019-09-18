#include "Cadastro.h"
#include <string>
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

Cadastro::Cadastro()
{
    ID = 0 ;
    Nome = " " ;
    Idade = 0 ;
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
void Cadastro::setIdade()
{
     do
        {
            cout << "Informe o ano de lançamento do filme: " ;
            cin >> Idade;

            if ( Idade <= 0)
            {
                cout << "Valor inválido!" << endl;
            }
        }
        while (Idade <= 0);
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
