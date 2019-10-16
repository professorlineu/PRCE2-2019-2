#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
#include "Pessoa.h"

class Funcionario : public Pessoa
{
    public:
        Funcionario();
        ~Funcionario();

        void setSalario(int);
        void setCargo(string);

        int getSalario();
        string getCargo();

    protected:

        int Salario;
        string Cargo;

    private:
};

#endif // FUNCIONARIO_H
