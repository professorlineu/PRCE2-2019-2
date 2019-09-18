#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include "Cliente.h"


Cliente::Cliente()
{
    ID = 0;
    Idade = 0;
}

Cliente::~Cliente()
{
    //dtor
}

//Métodos set

void Cliente::setID(int a)
{
    ID = a;
}

void Cliente::setNome(string b)
{
    Nome = b;
}

void Cliente::setEmail(string c)
{
    int iCont=0;
    int teste=0;
    std::string str (c);

    teste = str.length();


    for(int i=0;i<teste;i++)
    {
        if(c[i] == '@')
        {
            iCont++;
        }
    }

    if(iCont < 1)
    {
        cout << "E-mail Invalido" << endl;
    }
    else if (iCont == 1)
    {
        Email = c;
    }
}

void Cliente::setCidade(string d)
{
    Cidade = d;
}

void Cliente::setIdade(int e)
{
    Idade = e;
}


//Métodos get

int Cliente::getID()
{
    return ID;
}

int Cliente::getIdade()
{
    return Idade;
}

string Cliente::getNome()
{
    return Nome;
}

string Cliente::getEmail()
{
   return Email;
}

string Cliente::getCidade()
{
    return Cidade;
}
