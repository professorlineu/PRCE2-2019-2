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
    void setNome(string n) // método setNome
    {
        Nome = n;
    }

    void setAltura(float a) // método setAltura
    {
        Altura = a;
    }

    string getNome() // método getNome
    {
        return Nome;
    }

    double getAltura() // método Altura
    {
        return Altura;
    }

private:
    string Nome; // atributo Nome
    double Altura; // atributo Altura
};


int main()
{
    Pessoa p[5]; // objeto p1 do tipo Pessoa

    string sNome;
    double dAltura = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe seu nome e sobrenome: ";
    getline (cin, sNome); // entrada de string com espaços
    //cin >> sNome;
    p1.setNome(sNome);

    cout << "Informe a altura: ";
    cin >> dAltura;
    p1.setAltura(dAltura);


    cout << "\n\n\nDados da pessoa:" << endl;

    cout << "Nome: " << p1.getNome() << endl;
    cout << "Altura: " << p1.getAltura() << endl;

    return 0;
}
