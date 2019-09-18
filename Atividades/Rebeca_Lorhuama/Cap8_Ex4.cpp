/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descrição: Cálculo do volume de uma esfera
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

    //Declaração de variáveis

    float fRaio = 0;
    float fVolume = 0;
    void equacao();

int main()
{
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "VOLUME DE ESFERA" << endl << endl;

    cout << "Informe o raio da esfera: ";
    cin >> fRaio;

    equacao();

  return 0;
}

   void equacao()
{
    fVolume = (4 * fRaio * fRaio * fRaio * 3.1416)/3;

    if (fRaio >= 0)
    {
        cout << "O volume da esfera é: " << fVolume << endl;
    }

    else
    {
        cout << "Valor Inválido";
    }

    return;
}
