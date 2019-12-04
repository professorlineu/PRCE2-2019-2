/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descri��o: Adicionar produto
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

class Produto
{
public:
    void setPreco()
    {
        cout << "Insira o pre�o do produto: R$";
        cin >> Preco;
    }

    void setPeso()
    {
        cout << "Insira o peso do produto: ";
        cin >> Peso;
    }

    void exibirDados()
    {
        cout << "\n\nDADOS DO PRODUTO: \n\n";
        cout << "Pre�o: R$" <<  Preco << endl;
        cout << "Peso: " << Peso << endl;

        ValorProd = Preco * Peso;

        cout << "Valor: R$" << ValorProd << endl;
    }

private:
    float Preco;
    float Peso;
    float ValorProd;
};

int main()
{
    ///Declara��o de vari�veis
    Produto p;

    ///Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    ///C�digo do programa
    cout << "INSERIR PRODUTO:\n\n";
    p.setPreco();
    p.setPeso();

    p.exibirDados();

    return 0;
}
