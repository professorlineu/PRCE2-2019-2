#include "Mulher.h"

Mulher::Mulher()
{
    //ctor
    sResultado = " ";
}

Mulher::~Mulher()
{
    //dtor
}
string Mulher::Verificar()
{
    float a = getIMC();
    if (a < 18.5)
    {
      sResultado = "Abaixo do peso";
    }
    else if (a < 24.9)
    {
      sResultado = "Peso ideal";
    }
    else if (a < 29.9)
    {
      sResultado = "Sobrepeso";
    }
    else
    {
      sResultado = "Obeso";
    }

    return sResultado;
}
