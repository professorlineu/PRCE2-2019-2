#include "Horario.h"
#include <iostream>
#include <iomanip>

using namespace std;

Horario::Horario()
{
    //ctor
    iHora = 0;
    iMinuto = 0;
    iSegundo = 0;
}

Horario::~Horario()
{
    //dtor
}

void Horario::Hora(int x)
{
    iHora = x;
}

void Horario::Hora(int x, int y)
{
    iHora = x;
    iMinuto = y;
}

void Horario::Hora(int x, int y, int z)
{
    iHora = x;
    iMinuto = y;
    iSegundo = z;
}

int Horario::getHora()
{
    return iHora;
}

int Horario::getMinuto()
{
    return iMinuto;
}

int Horario::getSegundo()
{
    return iSegundo;
}

void Horario::HoraCompleta()
{
    cout << setfill('0');
    cout << "Horário 1: "
     << setw(2) << Horario::getHora() << ":" << "00" << ":" << "00" << endl;

    cout << "Horário 2: "
    << setw(2) << Horario::getHora() << ":"
    << setw(2) << Horario::getMinuto() << ":" << "00" << endl;

    cout << "Horário 3: "
    << setw(2) << Horario::getHora() << ":"
    << setw(2) << Horario::getMinuto() << ":"
    << setw(2) << Horario::getSegundo() << endl;
}
