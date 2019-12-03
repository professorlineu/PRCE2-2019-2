#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>                     //Classe Base
#include <string>

using namespace std;

class Pessoa
{
    public:
        Pessoa();
        ~Pessoa();
        void setNome (string n);
        void setEndereco (string e);
        void setDataNascimento (string d);

        string getNome() const;
        string getEndereco() const;
        string getDataNascimento() const;

    protected:                  //Podem ser utilizadas pelas derivadas
        string sNome;
        string sEndereco;
        string sDataNasc;

    private:
};

#endif // PESSOA_H
