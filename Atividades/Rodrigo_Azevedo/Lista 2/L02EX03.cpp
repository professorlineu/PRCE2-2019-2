/**********************************************************
- Autor:     Lineu Lima
- Descrição: Comparação entre Estruturas e Classes
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;


class Pessoa // classe Pessoa
{
public:
    void setNome() // método setNome
    {
        cout << "Informe seu nome e sobrenome: ";
        getline (cin, Nome); // entrada de string com espaços
    }

    void setAltura() // método setAltura
    {
        do
        {
            cout << "Informe a altura: ";
            cin >> Altura;

            if (Altura <= 0)
            {
                cout << "Valor inválido!" << endl;
            }
        } while (Altura <= 0);

    }

    void exibirDados() // método exibirDados
    {
        cout << "\n\n\nDados da pessoa:" << endl;

        cout << "Nome: " << Nome << endl;
        cout << "Altura: " << Altura << endl;
    }

private:
    string Nome; // atributo Nome
    double Altura; // atributo Altura
};


int main()
{
    Pessoa p1; // objeto p1 do tipo Pessoa

    setlocale(LC_ALL,"");
    system("color F1");

    p1.setNome(); // executando o método setNome

    p1.setAltura(); // executando o método setAltura

    p1.exibirDados(); // executando o método exibirDados

    return 0;
}
