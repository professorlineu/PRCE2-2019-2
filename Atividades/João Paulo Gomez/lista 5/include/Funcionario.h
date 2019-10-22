#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>
#include "Pessoa.h"



using namespace std;


class Funcionario: public Pessoa
{
    public:
        Funcionario();
        ~Funcionario();
    void setCargo(string);
    void setSalario(float);

    string getCargo();
    float getSalario();




    protected:

        string sCargo;
        float fSalario;

    private:
};

#endif // FUNCIONARIO_H
