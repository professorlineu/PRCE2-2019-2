#include "Cadastro.h"

Cadastro::Cadastro()
{
    ID = 0;
    Nome = "";
    AnoLancamento = 0;
}

Cadastro::~Cadastro()
{

}

//setters
void setID(int id)
{
    ID = id;
}

void setNome(string n)
{
    Nome = n;
}

void setAnoLancamento(int al)
{
    AnoLancamento = al;
}

//getters
int setID()
{
    return ID;
}

string setNome()
{
    return Nome;
}

int setAnoLancamento()
{
    return AnoLancamento;
}
