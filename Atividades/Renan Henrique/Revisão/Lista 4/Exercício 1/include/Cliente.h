#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>

using namespace std;
class Cliente
{
    public:
        Cliente();
        ~Cliente();
         void setNome();
         void setIdade();
         void setEmail();
         void setCidade();
         void setID();
         int getID();
         int getIdade();
         string getNome();
         string getEmail();
         string getCidade();


    private:
    int ID;
    string sNome;
    int iIdade;
    string sEmail;
    string sCidade;
};

#endif // CLIENTE_H
