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
    Estoque p1 [3];

    string sNome [5];
    int iQuant [5];
    double dValor [5];

    setlocale(LC_ALL,"");
    system("color F1");

    for (int i = 0; i <= 5; i++)
    {
        cout << "\nInforme o nome do produto:";
        cin >> sNome [i++];

        cout << "\nInforme o valor do produto:";
        cin >> dValor [i++];

        cout << "\nInforme a quantidade:";
        cin >> iQuant [i++];

        if (dValor < 0 || iQuant <= 0)
        {
            cout << "\nValores incorretos!" << endl;
        }
        else
        {
            cout << "\nProduto:" << sNome << endl;
            cout << "Preço: " << iQuant [i++] * dValor [i++] << endl;
        }

    }


}
