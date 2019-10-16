#include "Aluno.h"

#include <iostream>
#include <string>
using namespace std;

Aluno::Aluno()
{
    Curso = ' ';
    Semestre = 0;
}

Aluno::~Aluno()
{

}


void Aluno::setCurso(string c)
{
    Curso = c;
}

void Aluno::setSemestre(int s)
{
    if(s<1)
    {
        while(s<1)
        {
            cout << "Semestre inválido" << endl;
            cout << "Digite o semestre: ";
            cin >> s;
        }

        Semestre = s;
    }

    else
    {
        Semestre = s;
    }
}


string Aluno::getCurso() const
{
    return Curso;
}

int Aluno::getSemestre() const
{
    return Semestre;
}
