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
    void setIdade(int);
    void setEmail(string);
    void setCidade(string);

    // métodos getters
    int getID();
    string geNome();
    int getIdade();
    string getEmail();
    string getCidade();


private:
    int ID ;
    string Nome ;
    int Idade ;
    string Email ;
    string Cidade ;

};

#endif // CADASTRO_H
