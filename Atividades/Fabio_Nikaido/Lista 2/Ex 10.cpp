/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descrição: Lista 2 - Exercício 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string.h>

using namespace std;

class Produto
{
public:
    void setPeso()
    {
        cout << "Digite o peso do produto: ";
        cin >> peso;
    }

    void setPreco()
    {
        cout << "Digite o preço do produto: ";
        cin >> preco;
    }

    void ExibirDados()
    {
        cout << "Dados do produto" << endl;
        cout << "Peso: " << peso << endl;
        cout << "Preço: " << preco << endl;
        cout << "Valor: " << peso*preco << endl;
    }

private:
    float peso = 0;
    float preco = 0;

};


int main()
{

    //Declaração de variáveis

    Produto p;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    //Código do programa

    p.setPeso();
    p.setPreco();
    p.ExibirDados();

    return 1;
}



