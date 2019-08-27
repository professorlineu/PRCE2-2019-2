/**********************************************************
- Autor:     Elisa
- Descrição: POO
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class Estoque
{
public:
    void setNome()
    {
        cout << "Informe o nome do produto: ";
        cin >> Nome;
    }

    void setQuant()
    {
        do
        {
            cout << "Informe a quantidade: ";
            cin >> Quant;

            if (Quant <= 0)
            {
                cout << "Valor inválido!" << endl;
            }
        } while (Quant <= 0);

    }

    void setValor()
    {
        do
        {
            cout << "Informe o valor: ";
            cin >> Valor;

            if (Valor <= 0)
            {
                cout << "Valor inválido!" << endl;
            }
        } while (Valor <= 0);

    }

    void exibirDados()
    {
        cout << "\n\n\nDados do produto:" << endl;

        cout << "Nome: " << Nome << endl;
        cout << "Valor: " << Valor << endl;
        cout << "Quantidade: " << Quant << endl;
    }

private:
    string Nome;
    double Quant, Valor;
};


int main()
{
    Estoque e1[5];
    int i=0;

    setlocale(LC_ALL,"");
    system("color F1");

    for (i=0; i<5; i++)
    {
     e1[i].setNome();

     e1[i].setValor();

     e1[i].setQuant();
    }

    for (i=0; i<5; i++)
    {
      e1[i].exibirDados();
    }

    return 0;
}
