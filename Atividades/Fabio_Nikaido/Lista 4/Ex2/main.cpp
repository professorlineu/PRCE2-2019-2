#include "Filmes.h"
#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>


using namespace std;

int main()
{
    int ID=0;
    int ano=0;
    string nome;

    Filmes f;

    for(int i=0;i<2;i++)
    {
    cout << "Digite o ID do filme: ";
    cin >> ID;
    f.setID(ID);

    cout << "Digite o nome do filme: ";
    cin.ignore();
    getline (cin,nome);
    f.setNome(nome);

    cout << "Digite o ano de lancamento: ";
    cin >> ano;
    f.setAno(ano);

    cout << endl;

    cout << "ID: " << f.getID() << endl;
    cout << "Nome: "<< f.getNome() << endl;
    cout << "Ano de lancamento: " << f.getAno() << endl;

    cout << endl;
    }

    return 0;
}
