#include "Aluno.h"

Aluno::Aluno()
{
    //ctor
    sCurso = " ";
    iSemestre = 0;
}

Aluno::~Aluno()
{
    //dtor
}
void Aluno::setCurso()
{
    string c;
    cout << "Qual curso est� cursando? ";
    getline(cin, c);
    sCurso = c;
}
void Aluno::setSemestre()
{
    int i;
    cout << "Qual semestre est� cursando: ";
    cin >> i;
    iSemestre = i;
}
string Aluno::getCurso()
{
    return sCurso;
}
int Aluno::getSemestre()
{
    return iSemestre;
}
