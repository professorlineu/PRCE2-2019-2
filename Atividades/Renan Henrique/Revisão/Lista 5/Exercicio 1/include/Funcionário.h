#ifndef FUNCIONáRIO_H
#define FUNCIONáRIO_H
#include <Pessoa.h>
#include <string>
#include <iostream>

using namespace std;

class Funcionário : public Pessoa      //Herda funções da classe pessoa
{
    public:
        Funcionário();
        ~Funcionário();
        void setSalario();
        void setCargo();
        string getCargo();
        float getSalario();

    protected:
        float fSalario;
        string sCargo;

    private:
};

#endif // FUNCIONáRIO_H
