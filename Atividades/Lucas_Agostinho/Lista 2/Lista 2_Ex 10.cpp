/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Adicionar produto
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
        cout << "Insira o preço do produto: R$";
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
        cout << "Preço: R$" <<  Preco << endl;
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
    ///Declaração de variáveis
    Produto p;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    cout << "INSERIR PRODUTO:\n\n";
    p.setPreco();
    p.setPeso();

    p.exibirDados();

    return 0;
}
