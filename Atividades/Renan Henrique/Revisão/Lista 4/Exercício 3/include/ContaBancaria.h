#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include <iostream>
using namespace std;

class ContaBancaria
{
    public:
        ContaBancaria();
        ~ContaBancaria();
        void Debito();
        void Credito();
        void getSaldo();
        int Sair();

    private:
        double Saldo;
};

#endif // CONTABANCARIA_H
