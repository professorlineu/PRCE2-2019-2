/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Média de nota e sistema de aprovação
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
        cout << "\nInsira o nome do produto: ";
        getline(cin, Nome);
    }

    void setQuantidade()
    {
        do
        {
            cout << "Insira a quantidade do produto: ";
            cin >> Quantidade;

            if (Quantidade <= 0)
            {
                cout << "\nValor Inválido!";
            }
        }
        while (Quantidade <= 0);
    }

    void setValor()
    {
        do
        {
            cout << "Insira o valor do produto: R$";
            cin >> Valor;

            if (Valor <= 0)
            {
                cout << "\nValor Inválido!";
            }
        }
        while (Valor <= 0);
    }

    void getNome()
    {
        cout << "\nNome do produto: " << Nome << endl;
    }

    void getQuantidade()
    {
        cout << "Quantidade: " << Quantidade << endl;
    }

    void getValor()
    {
        cout << "Valor: " << Valor << endl;
    }

private:
    string Nome;
    int Quantidade;
    float Valor;
};

int main()
{
    ///Declaração de variáveis
    Estoque prod[2];
    int i = 0;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    for (i = 0; i < 2; i++)
    {
        if (i != 0)
        {
            cin.ignore();
        }

        prod[i].setNome();
        prod[i].setQuantidade();
        prod[i].setValor();
    }

    cout << "\nINFORMAÇÕES DO ESTOQUE";
    for (i = 0; i < 2; i++)
    {
        prod[i].getNome();
        prod[i].getQuantidade();
        prod[i].getValor();
    }

    return 0;
}
