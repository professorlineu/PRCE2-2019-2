/**********************************************************
- Autor:     Layane Quissak
- Descrição: Cap 8 - Ex 6
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

float peso (float fAlt, char cSexo);

int main()
{
    float fAltura = 0;
    char cGenero = 0;
    float fPideal = 0;


    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Insira a altura em metros: ";
    cin >> fAltura;

    cout << "Insira o sexo (F - feminino \ M - masculino): ";
    cin >> cGenero;

    fPideal = peso(fAltura, cGenero);

    cout << "O peso ideal é: " << fPideal << "kg" << endl;

    return 0;
}

float peso(float fAlt, char cSexo)
{
    float fPesoIdeal  = 0;

    if (cSexo == 'f'|| cSexo == 'F')
    {
        fPesoIdeal = 62.1 * fAlt - 44.7;
    }
    else if (cSexo == 'm' || cSexo == 'M')
    {
        fPesoIdeal = 72.7 * fAlt - 58;
    }

    return fPesoIdeal;
}
