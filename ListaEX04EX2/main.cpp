#include "Filme.h"
#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>


using namespace std;

int main()
{
    int ID = 0, ID2 = 0;
    int Ano = 0 , Ano2 = 0;
    string F1 = 0 , F2 = 0;

    Filme f1;

    cout << "Insira o ID do filme 1: ";
    cin >> ID;
    f1.setID(ID);

    cout << "Insira o nome do filme: ";
    cin.ignore();
    getline (cin,F1);
    f1.setF1(F1);

    cout << "Informe o ano de lancamento: ";
    cin >> Ano;
    f1.setAno(Ano);


    cout << "Insira o ID do filme 2: ";
    cin >> ID2;
    f1.setID(ID2);

    cout << "Insira o nome do filme: ";
    cin.ignore();
    getline (cin,F2);
    f1.setF2(F2);

    cout << "Informe o ano de lancamento: ";
    cin >> Ano2;
    f1.setAno(Ano2);

    cout << endl;

    cout << "     Dados Filme 1   " << endl;
    cout << "ID: " << f1.getID() << endl;
    cout << "Nome: "<< f1.getF1() << endl;
    cout << "Ano de lancamento: " << f1.getAno() << endl;
    while (Ano > 2019 )
    {
        cout << "Ano invalido" << endl;
    }
    if (Ano == 2019)
    {
        cout << "Lancamento deste ano " << endl;
    }
    else
    {
        cout << "Lancamento de anos anteriores" << endl;
    }
    cout << endl;


    cout << "     Dados Filme 2   " << endl;
    cout << "ID: " << f1.getID2() << endl;
    cout << "Nome: "<< f1.getF2() << endl;
    cout << "Ano de lancamento: " << f1.getAno2() << endl;
    while (Ano2 > 2019 )
    {
        cout << "Ano invalido" << endl;
    }
    if (Ano2 == 2019)
    {
        cout << "Lancamento deste ano " << endl;
    }
    else
    {
        cout << "Lancamento de anos anteriores" << endl;
    }
    cout << endl;




    return 0;
}
