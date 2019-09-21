#ifndef CADASTRO_H
#define CADASTRO_H

#include <string>
#include "Cadastro.h"
using namespace std;

class Cadastro
{
    public:
        Cadastro();
        ~Cadastro();

        void setIdentidade(int);
        void setNome(string);
        void setIdade(int);
        void setEmail(string);
        void setCidade(string);

        int getIdentidade();
        string getNome();
        int getIdade();
        string getEmail();
        string getCidade();

        void getSaidaDeDados();


    private:
        string Cidade;
        string Nome;
        string Email;
        int Idade;
        int Identidade;

};

#endif // CADASTRO_H
