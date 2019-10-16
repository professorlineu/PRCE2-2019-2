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
        void setEndereco(string);
        void setDataNascimento(int);

        string getNome() const;
        string getEndereco() const;
        int getDataNascimento() const;


    protected:

        string Nome;
        string Endereco;
        int DataNascimento;

    private:
};

#endif // PESSOA_H
