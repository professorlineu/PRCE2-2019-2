#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include "Horario.h"
using namespace std;



Horario::Horario()
{
    Hora = 00;
    Minuto = 00;
    Segundo = 00;
}

Horario::~Horario()
{
    //dtor
}

void Horario::setHora(int h)
{
    Hora = h;
}

void Horario::setHora(int h, int m)
{
    Hora = h;
    Minuto = m;
}

void Horario::setHora(int h, int m, int s)
{
    Hora = h;
    Minuto = m;
    Segundo = s;
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
    cout << endl << Hora << ":" << Minuto << ":" << Segundo;
}
