#include "Horario.h"
#include <iomanip>
#include <string>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <stdio.h>

using namespace std;

Horario::Horario()
{
    Hora = 0;
    Minuto = 0;
    Segundo = 0;
}

Horario::~Horario()
{
    //dtor
}

void Horario::setHora(int H)
{
    Hora = H;
}
void Horario::setHora(int H, int M)
{
    Hora = H;
    Minuto = M;
}
void Horario::setHora(int H, int M, int S)
{
    Hora = H;
    Minuto = M;
    Segundo = S;
}

//************************************************************************************************************************************

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
//void Horario::getHoraCompleta()
//{
//return Hora;
//}
