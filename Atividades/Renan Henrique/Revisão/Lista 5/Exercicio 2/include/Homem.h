#ifndef HOMEM_H
#define HOMEM_H
#include <Pessoa.h>
#include <string>
#include <iostream>

using namespace std;

class Homem : public Pessoa
{
    public:
        Homem();
        ~Homem();
        string Verificar();

    protected:
        string sResultado;

    private:
};

#endif // HOMEM_H
