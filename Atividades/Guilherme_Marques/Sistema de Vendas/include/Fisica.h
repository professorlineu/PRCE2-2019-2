#ifndef FISICA_H
#define FISICA_H

#include <iostream>
#include <string>
#include "Pessoa.h"
using namespace std;

class Fisica : public Pessoa
{
    public:
        Fisica();
        ~Fisica();

        void setCpf(string);

        string getCpf() const;

    protected:
        string Cpf;

    private:
};

#endif // FISICA_H
