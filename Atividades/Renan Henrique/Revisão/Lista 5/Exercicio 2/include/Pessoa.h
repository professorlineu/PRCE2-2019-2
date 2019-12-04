#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>

using namespace std;

class Pessoa
{
    public:
        Pessoa();
        ~Pessoa();
        void setNome();
        void setPeso();
        void setAltura();
        string getNome() const;
        float getPeso () const;
        float getAltura () const;
        float getIMC ();

    protected:
        string sNome;
        float fPeso;
        float fAltura;
        float fIMC;

    private:
};

#endif // PESSOA_H
