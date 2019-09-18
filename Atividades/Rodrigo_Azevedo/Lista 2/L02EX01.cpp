/**********************************************************
- Autor:     Lineu Lima
- Descrição: Comparação entre Estruturas e Classes
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;


struct Pessoa
{
    string Nome;
    float Altura;
};


int main()
{
    Pessoa p1;


    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe seu nome e sobrenome: ";
    getline (cin, p1.Nome); // entrada de string com espaços
    //cin >> p1.Nome;

    cout << "Informe a altura: ";
    cin >> p1.Altura;


    cout << "\n\n\nDados da pessoa:" << endl;

    cout << "Nome: " << p1.Nome << endl;
    cout << "Altura: " << p1.Altura << endl;

    return 0;
}
