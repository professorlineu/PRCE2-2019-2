#ifndef MULHER_H
#define MULHER_H
#include <Pessoa.h>
#include <string>
#include <iostream>

using namespace std;

class Mulher : public Pessoa
{
    public:
        Mulher();
        ~Mulher();
        string Verificar();

    protected:
        string sResultado;

    private:
};

#endif // MULHER_H
