#ifndef CADASTRO_H
#define CADASTRO_H

#include <string>

using namespace std;

class Cadastro
{
    public:
        Cadastro();
        ~Cadastro();

        //setters
        void setID(int);
        void setNome(string);
        void setAnoLancamento(int);

        //getters
        int getID();
        string getNome();
        int getAnoLancamento();

    private:
        int ID;
        string Nome;
        int AnoLancamento;
};

#endif // CADASTRO_H
