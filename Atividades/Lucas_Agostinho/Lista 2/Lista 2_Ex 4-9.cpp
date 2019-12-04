/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Controle de Estoque
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

    void exibirDados()
    {
        cout << "\nProduto: " << Nome << endl;
        cout << "Quantidade: " << Quantidade << endl;
        cout << "Valor: R$" << Valor << endl;
    }

private:
    string Nome;
    int Quantidade;
    float Valor;
};

int main()
{
    ///Declaração de variáveis
    Estoque prod[5];
    int i = 0;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa

    cout << "ADICONAR PRODUTOS\n";

    for (i = 0; i < 5; i++)
    {
        prod[i].setNome();
        prod[i].setQuantidade();
        prod[i].setValor();

        cin.ignore();
    }

    cout << "\n\nINFORMAÇÕES DO ESTOQUE\n";
    for (i = 0; i < 5; i++)
    {
        prod[i].exibirDados();
    }

    return 0;
}
