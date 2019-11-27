#ifndef CADASTRO_H
#define CADASTRO_H
#include <string>

using namespace std;


class CADASTRO
{
public:

    void setNome (string);

    void setCodigo (int);

    void setSalario (float);

    void setTempo (int);

    string getNome ();

    int getCodigo ();

    float getSalario ();

    int getTempo ();


private:
    string Nome;
    int Codigo;
    float Salario;
    int Tempo;
};

#endif // CADASTRO_H
