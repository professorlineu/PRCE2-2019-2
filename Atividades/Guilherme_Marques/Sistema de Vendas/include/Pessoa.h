#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>
using namespace std;


class Pessoa
{
    public:
        Pessoa();
        ~Pessoa();

        void setNome(string);

        string getNome() const;


    protected:
        string Nome;

    private:
};

#endif // PESSOA_H
