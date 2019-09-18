/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descrição: Exercícios 4 a 9
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
        cout << "Digite o nome do produto: ";
        getline(cin,nome[iCont]);

        if(iCont > 0)
        {
            getline(cin,nome[iCont]);
        }
    }

    void setQuantidade()
    {
        cout << "Digite a quantidade do produto: ";
        cin >> quantidade[iCont];

        if(quantidade[iCont] <= 0)
        {
            while(quantidade[iCont] <= 0)
            {
                cout << "Quantidade Inválida" << endl;
                cout << "Digite a quantidade do produto: ";
                cin >> quantidade[iCont];
            }
        }
    }

    void setValor()
    {
        cout << "Digite o valor do produto: ";
        cin >> valor[iCont];

        if(valor[iCont] < 0)
        {
            while(valor[iCont] < 0)
            {
                cout << "Valor Inválido" << endl;
                cout << "Digite o valor do produto: ";
                cin >> valor[iCont];
            }
        }
    }

    void ExibirDados()
    {
        cout << "Produto: " << nome[iCont] << endl;
        cout << "Quantidade: " << quantidade[iCont] << endl;
        cout << "Valor: " << valor[iCont] << endl;
    }

    void Contador()
    {
        iCont++;
    }




private:
    string nome[5];
    int quantidade[5];
    float valor[5];

    int iCont=0;
};



int main()
{

    int i=0;
    Estoque e1;

    setlocale(LC_ALL,"");
    system("color F1");


    for(i;i<5;i++)
    {
    e1.setNome();

    e1.setQuantidade();
    e1.setValor();
    e1.ExibirDados();
    e1.Contador();
    }

    cout << endl;

    return 0;
}

