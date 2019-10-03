#include "Cadastro.h"
#include <string>

using namespace std;

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
void Cadastro::setID(int id)
{
    ID = id;
}

void Cadastro::setNome(string n)
{
    Nome = n;
}

void Cadastro::setAnoLancamento(int al)
{
    AnoLancamento = al;
}

//getters
int Cadastro::getID()
{
    return ID;
}

string Cadastro::getNome()
{
    return Nome;
}

int Cadastro::getAnoLancamento()
{
    return AnoLancamento;
}
