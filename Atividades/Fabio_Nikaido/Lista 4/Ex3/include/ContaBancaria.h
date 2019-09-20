#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H


class ContaBancaria
{
    public:
        ContaBancaria();
        ~ContaBancaria();

    void credito();
    void debito();
    void transferirPara(double);
    void transferirDe(double);

    double getSaldo();



    private:
        double Saldo;
        int valor;
};

#endif // CONTABANCARIA_H
