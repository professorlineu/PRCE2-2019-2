#include "Cliente.h"
#include <string>
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int iID=0;
    string cNome;
    int iIdade=0;
    string cEmail;
    string cCidade;



    Cliente c1;

    cout << "Digite o ID: ";
    cin >> iID;
    c1.setID(iID);

    cout << "Digite o nome do cliente: ";
    cin >> cNome;
    c1.setNome(cNome);

    cout << "Digite a idade do cliente: ";
    cin >> iIdade;
    c1.setIdade(iIdade);

    cout << "Digite o email do cliente: ";
    cin >> cEmail;
    c1.setEmail(cEmail);

    cout << "Digite a cidade do cliente: ";
    cin >> cCidade;
    c1.setCidade(cCidade);

    cout << endl;

    cout << "Dados do Cliente:" << endl;
    cout << "ID: " << c1.getID() << endl;
    cout << "Nome: " << c1.getNome() << endl;
    cout << "Idade: " << c1.getIdade() << endl;
    cout << "E-mail: " << c1.getEmail() << endl;
    cout << "Cidade: " << c1.getCidade() << endl;

}
