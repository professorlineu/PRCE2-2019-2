/**********************************************************
- Autor:     Silas Barboza Rohde
- Descrição: Lista 2 - Exercício 9
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
    Estoque p1[5];

    string sNome;
    int iQuant;
    double dValor;

    setlocale(LC_ALL,"");
    system("color F1");

    for (int i = 0; i < 5; i++)
    {
        cout << "\nInforme o nome do produto:";
        cin >> sNome;
        p1[i].setNome(sNome);

        do
        {
            cout << "\nInforme o valor do produto:";
            cin >> dValor;

            if (dValor < 0)
            {
                cout << "\nValor incorreto!" << endl;
            }
        }
        while (dValor < 0);

        p1[i].setValor(dValor);

        do
        {
            cout << "\nInforme a quantidade:";
            cin >> iQuant;

            if (iQuant <= 0)
            {
                cout << "\nValor incorreto!" << endl;
            }
        }
        while (iQuant <= 0);

        p1[i].setQuant(iQuant);


        cout << "\nProduto:" << sNome << endl;
        cout << "Preço: " << iQuant * dValor << endl;


    }


}
