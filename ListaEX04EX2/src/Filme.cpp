#include "Filme.h"
#include <string>

using namespace std;

Filme::Filme()
{
    //ctor
    F1 = "";
    F2 = "";
    Ano = 0;
    Ano2 = 0;
    ID = 0;
    ID2 = 0;
}

Filme::~Filme()
{
    //dtor
}

void Filme::setID(int i)
{
    ID = i;
}

void Filme::setID2(int i2)
{
    ID2 = i2;
}

void Filme::setF1(string m1)
{
    F1 = m1;
}

void Filme::setF2(string m2)
{
    F2 = m2;
}

void Filme::setAno(int a)
{
    Ano = a;
}

void Filme::setAno2(int a2)
{
    Ano2 = a2;
}



int Filme::getID()
{
  return ID;
}

int Filme::getID2()
{
  return ID2;
}

string Filme::getF1()
{
    return F1;
}

string Filme::getF2()
{
    return F2;
}

int Filme::getAno()
{
    return Ano;
}

int Filme::getAno2()
{
    return Ano2;
}

