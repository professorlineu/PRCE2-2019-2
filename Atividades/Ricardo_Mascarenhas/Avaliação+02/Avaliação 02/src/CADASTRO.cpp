#include "CADASTRO.h"
#include <string>

using namespace std;

//CADASTRO::CADASTRO()
//
    //ctor
//}

//CADASTRO::~CADASTRO()
//{
    //dtor
//}
  void CADASTRO::setNome (string n)
    {
        Nome = n;
    }
    void CADASTRO::setCodigo (int c)
    {
        Codigo = c;
    }
    void CADASTRO::setSalario (float s)
    {
        Salario = s;
    }
    void CADASTRO::setTempo (int t)
    {
        Tempo = t;
    }

    string CADASTRO::getNome ()
    {
        return Nome ;
    }
    int CADASTRO::getCodigo ()
    {
        return Codigo;
    }
    float CADASTRO::getSalario ()
    {
        return Salario;
    }
    int CADASTRO::getTempo ()
    {
        return Tempo;
    }
