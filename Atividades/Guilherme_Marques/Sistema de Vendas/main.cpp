#include <iostream>
#include <string>
#include "Fisica.h"
#include "Juridica.h"
using namespace std;

int main()
{
    Fisica f1;

    Juridica j1;

    f1.setNome("Marina Silva");
    f1.setCpf("105.683.432-98");

    cout << "Nome: " << f1.getNome() << endl;
    cout << "CPF: " << f1.getCpf() << endl << endl;

    j1.setNome("Tintas Nova Cor Ltda");
    j1.setCnpj("27.662.423/0001-23");

    cout << "Nome: " << j1.getNome() << endl;
    cout << "CPF: " << j1.getCnpj() << endl << endl;

    return 0;
}
