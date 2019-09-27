#include <iostream>
#include "filme.h"
#include <string>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ID=0;
    int Ano=0;
    string Nome;

    filme f1;

    for(int i=0;i<2;i++)
    {
        cout<<"Digite o ID do filme: ";
        cin>>ID;
        f1.setID(ID);

        cout<<"Digite o nome do filme: ";
        cin.ignore();
        getline (cin,Nome);
        f1.setNome(Nome);

        cout<<"Digite o ano do lançamento: ";
        cin>>Ano;
        f1.setAno(Ano);

        cout<<endl;

        cout<<"ID: "<<f1.getID()<<endl;

        cout<<"Nome do filme: "<<f1.getNome()<<endl;

        cout<<"Ano de lançamento: "<<f1.getAno();

        cout<<endl;

    }
    return 0;
}
