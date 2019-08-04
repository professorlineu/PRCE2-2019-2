/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descrição: Lista 8 - Exercício 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int volume(float fRaio)
{
    return ((fRaio*fRaio*fRaio)*4)/3;
}


int main()
{

    //Declaração de variáveis

    float fRaio1 = 0;
    float fRaio2 = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o raio da esfera: ";
    cin >> fRaio1;

    fRaio2 = volume(fRaio1);

    cout << "O volume da esfera é: " << fRaio2 << endl;

    return 1;
}

