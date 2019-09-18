#ifndef CADASTRO_H
#define CADASTRO_H
#include <string>


using namespace std;

class Cadastro
{
public:
    Cadastro();
    ~Cadastro();

    void setID(int);
    void setNome(string);
    void setIdade();

    // métodos getters
    int getID();
    string geNome();
    int getIdade();

private:
    int ID ;
    string Nome ;
    int Idade ;

};

#endif // CADASTRO_H
