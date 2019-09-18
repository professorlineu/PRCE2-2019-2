/**********************************************************
- Autor:     Silas Barboza Rohde
- Descrição: Lista 2 - Exercício 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;


class Estoque
{

public:
    void setNome (string n)
    {
        Nome = n;
    }
    void setQuant (int q)
    {
        Quant = q;
    }
    void setValor (double v)
    {
        Valor = v;
    }
    string getNome()
    {
        return Nome;
    }
    int getQuant()
    {
        return Quant;
    }
    double getValor()
    {
        return Valor;
    }


private:
    string Nome;
    int Quant;
    double Valor;

};

int main()
{
    Estoque p1 [3];

    string sNome;
    int iQuant;
    double dValor;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o nome do produto:";
    cin >> sNome;

    cout << "\nInforme o valor do produto:";
    cin >> dValor;

    cout << "\nInforme a quantidade:";
    cin >> iQuant;

    if (dValor < 0 || iQuant <= 0)
    {
        cout << "\nValores incorretos!" << endl;
    }
    else
    {
        cout << "\nProduto:" << sNome << endl;
        cout << "Preço: " << iQuant * dValor << endl;
    }


}
