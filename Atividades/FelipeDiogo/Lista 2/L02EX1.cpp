/**********************************************************
- Autor:     Felipe Diogo
- Descrição: Comparação entre Estruturas e Classes
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
        cout << "Informe o nome do produto ";
        cin >> Nome ;
    }

    void setQuantidade()
    {
    do
    {
        cout << "Informe a quantidade do produto ";
        cin >> Quantidade;

        if(Quantidade <= 0)
        {
        cout << "Quantidade invalida\n ";
        }

    } while ( Quantidade <= 0);

    }

    void setValor()
    {
    do
    {
        cout << "Informe o valor do produto ";
        cin >> Valor;

        if(Valor < 0)
        {
        cout << "Valor invalido\n ";
        }

    } while ( Valor < 0);

    }

    void exibirDados()
    {
        cout << "\n\n\nDados do estoque:" << endl;

        cout << "Nome: " << Nome << endl;
        cout << "Quantidade: " << Quantidade << endl;
        cout << "Valor: " << Valor << endl;
    }


private:
    string Nome;
    double Valor;
    double Quantidade;
};


int main()
{
    Estoque p1[5];
    int i = 0;

    setlocale(LC_ALL,"");
    system("color F1");


    for (int i = 0; i < 5; i++)

    p1[i].setNome();

    for (int i = 0; i < 5; i++)

    p1[i].setQuantidade();

    for (int i = 0; i < 5; i++)

    p1[i].setValor();

    for (int i = 0; i < 5; i++)

    p1[i].exibirDados();

    return 0;
}
