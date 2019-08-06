/**********************************************************
- Autor:     Lineu Lima
- Descrição: Struct
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

struct Produto
{
    string sNome;
    float fPreco = 0;
};


struct Cliente
{
    string sNome[3];
    string sSobrenome[3];
};

int main()
{
    Produto p1;
    Cliente c1;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Nome do produto: ";
    cin >> p1.sNome;

    cout << "Preço do produto: ";
    cin >> p1.fPreco;

    // entrando com vários valores
    for (int i = 0; i < 3; i++)
    {
        cout << "Nome do cliente: ";
        cin >> c1.sNome[i];

        cout << "Sobrenome do cliente: ";
        cin >> c1.sSobrenome[i];
    }

}



