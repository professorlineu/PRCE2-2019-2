#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
#include <Pessoa.h>
#include <iostream>

using namespace std;

class Funcionario : public Pessoa
{
    public:
        Funcionario();
        ~Funcionario();
        void setCargo();
        void setSalario();
        float getSalario();
        string getCargo();

    protected:
        string sCargo;
        float fSalario;

    private:
};

#endif // FUNCIONARIO_H
