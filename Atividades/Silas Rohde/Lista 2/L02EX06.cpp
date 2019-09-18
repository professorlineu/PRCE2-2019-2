/**********************************************************
- Autor:     Silas Barboza Rohde
- Descrição: Lista 2 - Exercício 6
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
     string exibirDadossNome()
    {
        return sNome;
    }
    int exibirDadosiQuant()
    {
        return iQuant;
    }
    double exibirDadosdValor()
    {
        return dValor;
    }

private:
    string sNome;
    int iQuant;
    double dValor;

};
