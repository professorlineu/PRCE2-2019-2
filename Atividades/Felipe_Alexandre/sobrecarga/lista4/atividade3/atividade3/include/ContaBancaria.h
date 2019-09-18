#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H


class ContaBancaria
{
public:
    ContaBancaria();
    ~ContaBancaria();
//setter
    void setSaldo(double);
    void setCredito(double);
    void setDebito(double);
    void setNconta(int);
//getter
    double getSaldo();
    double getCredito();
    double getDebito();
    int getNconta();


private:
    double Saldo;
    double Credito;
    double Debito;
    int Nconta;
};

#endif // CONTABANCARIA_H
