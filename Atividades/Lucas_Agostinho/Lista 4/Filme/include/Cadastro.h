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
        void setID();
        void setNome();
        void setAnoLancamento();

        //getters
        int setID();
        string setNome();
        int setAnoLancamento();

    private:
        int ID;
        string Nome;
        int AnoLancamento;
};

#endif // CADASTRO_H
