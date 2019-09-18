/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Calcular peso ideal
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

float peso_ideal (float fAlt, char cSexo);

int main()
{
    ///Declaração de variáveis
    float fAltura = 0;
    char cGenero = 0;
    float fPeso_ideal = 0;


    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    cout << "Insira sua altura: ";
    cin >> fAltura;

    cout << "Insira seu sexo: ";
    cin >> cGenero;

    fPeso_ideal = peso_ideal (fAltura, cGenero);

    cout << "\nSeu peso ideal é: " << fPeso_ideal << "kg" << endl;

    return 0;
}

float peso_ideal(float fAlt, char cSexo)
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
