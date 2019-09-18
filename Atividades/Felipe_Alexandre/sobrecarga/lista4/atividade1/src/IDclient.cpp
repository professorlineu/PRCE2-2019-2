#include "IDclient.h"
#include<string.h>
#include<iostream>
using namespace std;
IDclient::IDclient()
{
    Nome="";
    Idade=0;
    Cidade="";
    ID=0;
    Email="";

}

IDclient::~IDclient()
{

}
//setter
void IDclient::setNome(string n)
{
    Nome=n;
}
void IDclient::setEmail(string e)
{
    Email=e;
}
void IDclient::setCidade(string c)
{
    Cidade=c;
}
void IDclient::setID(int i)
{
    ID=i;
}
void IDclient::setIdade(int id)
{
    Idade=id;
}
//getter
string IDclient::getNome()
{
    return Nome;
}
string IDclient::getEmail()
{
    return Email;
}
string IDclient::getCidade()
{
    return Cidade;
}
int IDclient::getIdade()
{
    return Idade;
}
int IDclient::getID()
{
    return ID;
}
