/**********************************************************
- Autor:     Silas Barboza Rohde
- Descrição: Lista 2 - Exercício 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;


class Estoque
{

public:
    void setsNome (string sNome);
    {
        Nome = n;
    }
    void setiQuant (int iQuant);
    {
        Quant = q;
    }
    void setdValor (double dValor);
    {
        Valor = v;
    }
     string getsNome()
    {
        return sNome;
    }
    int getiQuant()
    {
        return iQuant;
    }
    double dValor()
    {
        return dValor;
    }

private:
    string sNome;
    int iQuant;
    double dValor;

};
