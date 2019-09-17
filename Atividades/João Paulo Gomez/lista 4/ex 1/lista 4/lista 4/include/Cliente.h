#ifndef CLIENTE_H
#define CLIENTE_H
#include "Cliente.h"
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

class Cliente
{
    public:
        Cliente();
        virtual ~Cliente();

void setId(int);
void setNome(string);
void setIdade(int);
void setEmail(string);
void setCidade(string);

int getId();
string getNome();
string getCidade();
int getIdade();
string getEmail();



    private:
int Id;
string Nome;
int Idade;
string Email;
string Cidade;
};

#endif // CLIENTE_H
