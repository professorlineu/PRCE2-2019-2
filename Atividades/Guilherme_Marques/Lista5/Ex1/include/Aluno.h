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

        string getCurso() const;
        int getSemestre() const;

    protected:

        string Curso;
        int Semestre;


    private:
};

#endif // ALUNO_H
