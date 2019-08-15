/**********************************************************
- Autor:     Leonardo Miurin
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <math.h>

using namespace std;

float Volume_Esfera(float fRaio);

int main()
{
    setlocale(LC_ALL,"");

    float fRaio;
    float fVolume;

    cout << "Informe o raio da esfera: " << endl;
    cin >> fRaio;

    fVolume = Volume_Esfera(fRaio);

    cout << "Volume da esfera: " << fVolume << endl;

    return 0;
}




float Volume_Esfera(float fRaio){


    return pow(fRaio, 3)*4/3;
}




