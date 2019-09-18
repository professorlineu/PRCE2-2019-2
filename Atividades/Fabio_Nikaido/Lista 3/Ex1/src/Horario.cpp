#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include "Horario.h"

using namespace std;

Horario::Horario()
{
    Hora = 0;
    Minuto = 0;
    Segundo = 0;
}

Horario::~Horario()
{

}

void Horario::setHora(int a, int b, int c) //Hora, Minuto e Segundo
{
    Hora=a;
    Minuto=b;
    Segundo=c;
}

int Horario::getHora()
{
    return Hora;
}

int Horario::getMinuto()
{
    return Minuto;
}

int Horario::getSegundo()
{
    return Segundo;
}

void Horario::getHoraCompleta()
{
    cout << Hora << ":" << Minuto << ":" << Segundo;
}
