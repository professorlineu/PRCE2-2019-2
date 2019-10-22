#include <iostream>
#include <string>
#include "Aluno.h"

using namespace std;
Aluno::Aluno()
{
    //ctor
}

Aluno::~Aluno()
{
    //dtor
}

void Aluno::setCurso(string c)
{
    sCurso=c;
}

void Aluno::setSemestre(int s)
{
    sSemestre=s;
}

string Aluno::getCurso()
{
    return sCurso;
}

int Aluno::getSemestre()
{
    return sSemestre;
}
