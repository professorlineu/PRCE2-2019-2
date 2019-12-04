#include "Pessoa.h"

Pessoa::Pessoa()
{
    //ctor
    sNome = " ";
    fPeso = 0;
    fAltura = 0;
    fIMC = 0;
}

Pessoa::~Pessoa()
{
    //dtor
}
void Pessoa::setNome()
{
    string a = " ";
    cout << "Digite o nome da pessoa: ";
    getline (cin, a);
    sNome = a;
}
void Pessoa::setPeso()
{
    float a = 0;
    cout << "Digite o peso da pessoa: ";
    cin >> a;
    fPeso = a;
}
void Pessoa::setAltura()
{
    float a = 0;
    cout << "Digite a altura da pessoa: ";
    cin >> a;
    fAltura = a;
}
string Pessoa::getNome() const
{
    return sNome;
}
float Pessoa::getPeso() const
{
    return fPeso;
}
float Pessoa::getAltura() const
{
    return fAltura;
}
float Pessoa::getIMC()
{
    float a = fPeso;
    float b = fAltura;
    float c = a/(b*b);
    fIMC = c;
    return fIMC;
}
