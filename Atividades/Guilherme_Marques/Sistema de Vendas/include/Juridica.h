#ifndef JURIDICA_H
#define JURIDICA_H

#include <iostream>
#include <string>
#include "Pessoa.h"
using namespace std;

class Juridica : public Pessoa
{
    public:
        Juridica();
        ~Juridica();

        void setCnpj(string);

        string getCnpj() const;

    protected:
        string Cnpj;

    private:
};

#endif // JURIDICA_H
