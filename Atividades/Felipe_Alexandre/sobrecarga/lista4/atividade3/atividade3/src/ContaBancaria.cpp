#include "ContaBancaria.h"

ContaBancaria::ContaBancaria()
{
    double Credito=0;
    double Debito=0;
    double Saldo=0;
    int Nconta=0;
}

ContaBancaria::~ContaBancaria()
{

}
//setter
void ContaBancaria::setNconta(int n)
{
    Nconta=n;
}
void ContaBancaria::setSaldo(double s)
{
    Saldo=s;
}
void ContaBancaria::setCredito(double c)
{
    if(Credito>0)//verifica se o credito não é negativo
    {
        Credito=c+Saldo;
    }
    if(Credito<0)
    {
        Credito=Saldo;
    }
}
void ContaBancaria::setDebito(double d)
{
    if(Saldo>d)//verificar a validade do saldo
    {
        Debito=Saldo-d;
    }
    if(Saldo<=d)
    {
        Debito=Saldo;
    }
}
//getter
int ContaBancaria::getNconta()
{
    return Nconta;
}
double ContaBancaria::getSaldo()
{
    return Saldo;
}
double ContaBancaria::getDebito()
{
    Saldo=Debito;
    return Saldo;
}
double ContaBancaria::getCredito()
{
    Saldo=Credito;
    return Saldo;
}
