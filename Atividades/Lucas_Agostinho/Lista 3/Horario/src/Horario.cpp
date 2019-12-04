#include <iostream>
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

// métodos setters
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

// métodos getters
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
    cout << "Horário: " << setw(2) << Hora << ":" << setw(2) << Minuto << ":" << setw(2) << Segundo << endl;
}
