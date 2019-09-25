/**********************************************************
- Autor:     Vinicius Soares
- Descrição: Lista 2 - Orientação a objeto - Exercicio 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;


struct Estoque
{
public:
    void setNome () //método setNome
    {
        cout << "Informe o nome do produto: ";
        getline (cin, Nome); // entrada de string com espaços
    }
    void setQuantidade () //método setQuantidade
    {
        do
        {
            cout << "Informe a quantidade: ";
            cin >> Quantidade;

            if (Quantidade <= 0)
            {
                cout << "Valor inválido!" << endl;
            }
        } while (Quantidade <= 0);

    }


    void setValor () //método setValor
    {
        do
        {
        cout << "Informe o valor: ";
        cin >> Valor;

        if (Valor < 0)
            {
                cout << "Valor inválido!" << endl;
            }
        } while (Valor < 0);
    }
    void getExibirdados () //método para exibir os dados
    {
        cout << "\n\n\nInformações do produto:" << endl;
        cout << "Nome: " << Nome << endl;
        cout << "Quantidade: " << Quantidade << endl;
        cout << "Valor: " << Valor << endl;
    }


    private:
    string Nome; //atributo nome
    float Quantidade; //atributo quantidade
    float Valor; //atributo valor
};


int main()
{
    Estoque e1; // objeto e1 do tipo Estoque

    setlocale(LC_ALL,"");
    system("color F1");

    e1.setNome(); // executando o método setNome

    e1.setQuantidade(); // executando o método setQuantidade

    e1.setValor(); // executando o método setValor

    e1.getExibirdados(); // executando o método getExibirDados
    return 0;
}
