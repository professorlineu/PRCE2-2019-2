#include "filme.h"
#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>




using namespace std;
filme::filme()
{
    //ctor
    ID=0;
    Ano=0;
}

filme::~filme()
{
    //dtor
}

void filme::setID(int a)
{
    ID=0;
    ID=a;
}

void filme::setNome(string b)
{
    Nome=b;
}

void filme::setAno(int c)
{
    while (c>2019)
    {
        cout<<"Ano inválido"<<endl;
        cout<<"Digite novamente o ano de lançamento: "<<endl;
        cin>>c;
    }
    Ano=c;
}

int filme::getID()
{
    return ID;
}

string filme::getNome()
{
    return Nome;
}

int filme::getAno()
{
    return Ano;
}
