#ifndef ALUNO_H
#define ALUNO_H
#include <Pessoa.h>     //Inclui a biblioteca base
#include <iostream>
#include <string>
                        //Derivada
using namespace std;

class Aluno : public Pessoa     //Herda as funções da classe Pessoa
{
    public:
        Aluno();
        ~Aluno();
        void setCurso();
        void setSemestre();
        string getCurso ();
        int getSemestre();

    protected:
        string sCurso;
        int iSemestre;
    private:
};

#endif // ALUNO_H
