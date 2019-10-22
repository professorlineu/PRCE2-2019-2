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
    void setNascimento(int,int,int);

    string getNome();
    string getEndereco();
    int getNascimento();

    protected:

        string sNome;
        string sEndereco;
        int iDia=0;
        int iMes=0;
        int iAno=0;



    private:
};

#endif // PESSOA_H
