#include <iostream>
#include <string>
#include "Homem.h"
#include "Mulher.h"

using namespace std;

int main()
{
    Homem h1;
    Mulher m1;

    cout << "Entre com os dados de uma mulher: " << endl;
    m1.setNome();
    m1.setAltura();
    m1.setPeso();

    cout << "Nome: " << m1.getNome() << endl
        << "Altura: " << m1.getAltura() << endl
        << "Peso: " << m1.getPeso() << endl
        << "IMC: " << m1.getIMC() << endl
        << "Resultado: " << m1.Verificar() << endl;

    cout << "Entre com os dados de um homem: " << endl;
    cin.ignore();
    h1.setNome();
    h1.setAltura();
    h1.setPeso();

    cout << "Nome: " << h1.getNome() << endl
        << "Altura: " << h1.getAltura() << endl
        << "Peso: " << h1.getPeso() << endl
        << "IMC: " << h1.getIMC() << endl
        << "Resultado: " << h1.Verificar() << endl;
       return 0;
}
