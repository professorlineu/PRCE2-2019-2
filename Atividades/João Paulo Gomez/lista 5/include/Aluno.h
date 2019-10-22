#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;



class Aluno : public Pessoa
{
    public:
        Aluno();
        ~Aluno();
    void setCurso(string);
    void setSemestre(int);

    string getCurso();
    int getSemestre();

    protected:

    string sCurso;
    int sSemestre;

    private:


};

#endif // ALUNO_H
