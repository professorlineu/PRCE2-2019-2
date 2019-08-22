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
    void setNome(string n)
    {
        Nome = n;
    }

    void setQuantidade(int q)
    {
        Quantidade = q;
    }

    void setValor(float v)
    {
        Valor = v;
    }

    string getNome()
    {
        return Nome;
    }

    int getQuantidade()
    {
        return Quantidade;
    }

    float getValor()
    {
        return Valor;
    }

private:
    string Nome;
    int Quantidade;
    float Valor;

};

int main()
{
    ///Declaração de variáveis
    Estoque prod;

    string sNome;
    int iQtd = 0;
    float fValor = 0;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    cout << "Insira o nome do produto: ";
    getline(cin, sNome);

    prod.setNome(sNome);

    cout << "\nINFORMAÇÕES DO ESTOQUE";
    cout << "\n\nNome do produto: " << prod.getNome() << endl;


    return 0;
}

