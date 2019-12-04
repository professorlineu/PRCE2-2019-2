#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <iomanip>
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

void Horario::setHora(int h, int m, int s) //Hora, Minuto e Segundo
{
    Hora=h;
    Minuto=m;
    Segundo=s;
}

void Horario::setHora(int h, int m) //Hora, Minuto
{
    Hora=h;
    Minuto=m;
}

void Horario::setHora(int h) //Hora
{
    Hora=h;
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
    cout << setw(2) << Hora << ":" << setw(2) << Minuto << ":" << setw(2) << Segundo;
}
