#include "Homem.h"

Homem::Homem()
{
    //ctor
    sResultado = " ";
}

Homem::~Homem()
{
    //dtor
}
string Homem::Verificar()
{
    float a = getIMC();
    if (a < 20.7)
    {
      sResultado = "Abaixo do peso";
    }
    else if (a < 26.4)
    {
      sResultado = "Peso ideal";
    }
    else if (a < 27.8)
    {
      sResultado = "Sobrepeso";
    }
    else
    {
      sResultado = "Obeso";
    }

    return sResultado;
}
