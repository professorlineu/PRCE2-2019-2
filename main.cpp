#include <iostream>
#include <string>
#include "Cadastro.h"


using namespace std;

int main()
{
    int a;
    int b;
    string c;
    string d;
    string e;

    Cadastro c1;

    cout << "        CADASTRO CLIENTE      " << endl;

    cout << "Informe o ID: ";
    cin >> a;
    c1.setIdentidade(a);

    cout << "Informe o nome: ";
    cin >> c;
    c1.setNome(c);

    cout << "Informe a idade:";
    cin >> b;
    c1.setIdade(b);

    cout << "Informe o email: ";
    cin >> d;
    c1.setEmail(d);

    cout << "Informe a cidade: ";
    cin >> e;
    c1.setCidade(e);



    cout << "       Dados do cliente     " << endl;
    cout << "ID: " << c1.getIdentidade()<< endl;
    cout << "Nome: " << c1.getNome()<< endl;
    cout << "Idade: " << c1.getIdade()<< endl;
    cout << "Email: " << c1.getEmail()<< endl;
    cout << "Cidade: " << c1.getCidade()<< endl;



}
