#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <cstdlib>
#include <locale.h>
#include <iostream>

using namespace std;

class CONTA
{
    public:
        CONTA();
        virtual ~CONTA();

    void setSaldo (double);
    void setDebito ();
    void setCredito (double);
    void setAplica ();

    double getSaldo ();
    double getDebito ();
    double getCredito ();
    double getAplica ();

    private:
        double Saldo ;
        double Debito ;
        double Credito ;
        double Aplica ;
};

#endif // CONTA_H
