/************************************************
Nome: Ricardo Mascarenhas
CADASTRO DE CLIENTES
************************************************/

#include <iostream>
#include "CADASTRO.H"
#include <cstdlib>
#include <locale.h>
#include <string>


using namespace std;

int main()
{

    Cadastro C1 [2] ;
    int iId = 0;
    int iIdade = 0;
    string sNome ;
    string sEmail ;
    string sCidade ;
    int i = 0 ;

    cout << "CADASTRO DE CLIENTES" << endl ;
    cout << "\n" ;

    for (int i = 0; i<2; i++)
    {
        if (i != 0)
        {
            cin.ignore();
        }

    cout << "Informe o nome do cliente: " ;
    getline(cin,sNome);
    C1[i].setNome(sNome);

    if (i != 0)
        {
            cin.ignore();
        }

    cout << "Informe o e-mail do cliente: " ;
    getline(cin, sEmail);
    C1[i].setEmail(sEmail);

    if (i != 0)
        {
            cin.ignore();
        }

    cout << "Informe a cidade do cliente: " ;
    getline(cin, sCidade);
    C1[i].setCidade(sCidade);

    cout << "Informe o ID: " ;
    cin >> iId ;
    C1[i].setID(iId);


    cout << "Informe a idade do cliente: " ;
    cin >> iIdade ;
    C1[i].setIdade(iIdade);

    cout << "\n" ;

     system("CLS");
    }

    cout << "DADOS DO CLIENTE" << endl ;

    cout << "\n" ;

    for (int i = 0; i<2; i++)
    {
    cout << "ID: " << C1[i].getID();
    cout << "\n" ;
    cout << "Nome: " << C1[i].geNome();
    cout << "\n" ;
    cout << "Idade: " << C1[i].getIdade();
    cout << "\n" ;
    cout << "Email: " << C1[i].getEmail();
    cout << "\n" ;
    cout << "Cidade: " << C1[i].getCidade();
    }

    return 0;
}
