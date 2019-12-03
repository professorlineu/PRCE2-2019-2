#ifndef FUNCION·RIO_H
#define FUNCION·RIO_H
#include <Pessoa.h>
#include <string>
#include <iostream>

using namespace std;

class Funcion·rio : public Pessoa      //Herda funÁıes da classe pessoa
{
    public:
        Funcion·rio();
        ~Funcion·rio();
        void setSalario();
        void setCargo();
        string getCargo();
        float getSalario();

    protected:
        float fSalario;
        string sCargo;

    private:
};

#endif // FUNCION·RIO_H
