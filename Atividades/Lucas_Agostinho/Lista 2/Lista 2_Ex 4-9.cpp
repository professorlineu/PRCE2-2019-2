/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: Controle de Estoque
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
                cout << "\nValor Inv�lido!";
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
                cout << "\nValor Inv�lido!";
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
    ///Declara��o de vari�veis
    Estoque prod[5];
    int i = 0;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa

    cout << "ADICONAR PRODUTOS\n";

    for (i = 0; i < 5; i++)
    {
        prod[i].setNome();
        prod[i].setQuantidade();
        prod[i].setValor();

        cin.ignore();
    }

    cout << "\n\nINFORMA��ES DO ESTOQUE\n";
    for (i = 0; i < 5; i++)
    {
        prod[i].exibirDados();
    }

    return 0;
}
