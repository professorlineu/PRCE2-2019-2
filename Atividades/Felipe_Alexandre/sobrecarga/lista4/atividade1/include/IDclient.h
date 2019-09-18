#ifndef IDCLIENT_H
#define IDCLIENT_H
#include<string.h>
#include<iostream>
#include<stdio.h>
using namespace std;

class IDclient
{
public:
    IDclient();
    ~IDclient();
//setter
    void setNome(string);
    void setEmail(string);
    void setCidade(string);
    void setIdade(int);
    void setID(int);
//getter
    string getNome();
    string getEmail();
    char getEmailal();
    string getCidade();
    int getIdade();
    int getID();
private:
    string Nome;
    string Email;
    string Cidade;
    int ID;
    int Idade;
};

#endif // IDCLIENT_H
