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
    string sNome ;
    int iId = 0;
    int iIdade = 0;
    int i = 0 ;

    cout << "CADASTRO DE FILMES" << endl ;
    cout << "\n" ;

    for (int i = 0; i<2; i++)
    {
        if (i != 0)
        {
            cin.ignore();
        }

    cout << "Informe o nome do filme: " ;
    getline(cin,sNome);
    C1[i].setNome(sNome);


    cout << "Informe o ID do filme: " ;
    cin >> iId ;
    C1[i].setID(iId);


    //cout << "Informe o ano de lançamento do filme: " ;
    //cin >> iIdade ;
    C1[i].setIdade();

    cout << "\n" ;

     system("CLS");
    }

    cout << "DADOS DOS FILMES" << endl ;

    cout << "\n" ;

    for (int i = 0; i<2; i++)
    {
        cout << "\n" ;
    cout << "ID: " << C1[i].getID();
    cout << "\n" ;
    cout << "Nome: " << C1[i].geNome();
    cout << "\n" ;
    cout << "Ano de lançamento: " << C1[i].getIdade();
    cout << "\n" ;
    }


    return 0;
}
