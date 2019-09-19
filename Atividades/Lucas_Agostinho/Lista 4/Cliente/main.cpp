/**********************************************************
- Autor:     Lucas A Sousa
- Descrição: Lista 4 Exercício 1
**********************************************************/
#include <iostream>
#include "Cadastro.h"
#include <string>

using namespace std;

int main()
{
    //Variáveis
    Cadastro c1;

    int iID = 0;
    string sNome = "";
    int iIdade = 0;
    string sEmail = "";
    string sCidade = "";

    //Programa
    //Criar cadastro
    cout << "CADASTRO DO CLIENTE\n" << endl;

    cout << "Informe o ID: ";
    cin >> iID;
    c1.setID(iID);

    cin.ignore();
    cout << "Informe o nome: ";
    getline(cin, sNome);
    c1.setNome(sNome);

    cout << "Informe a idade: ";
    cin >> iIdade;
    c1.setIdade(iIdade);

    cout << "Informe o email: ";
    cin >> sEmail;
    c1.setEmail(sEmail);

    cin.ignore();
    cout << "Informe a cidade: ";
    getline(cin, sCidade);
    c1.setCidade(sCidade);

    //Imprimir cadastro
    cout << "\n\nDADOS DO CLIENTE" << endl;

    cout << "\nID: " << c1.getID() << endl;
    cout << "Nome: " << c1.getNome() << endl;
    cout << "Idade: " << c1.getIdade() << endl;
    cout << "Email: " << c1.getEmail() << endl;
    cout << "Cidade: " << c1.getCidade() << endl;

    return 0;
}
