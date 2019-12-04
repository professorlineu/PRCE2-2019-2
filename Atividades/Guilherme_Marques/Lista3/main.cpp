/**********************************************************
- Autor:     Guilherme Marques
- Descri��o: Lista 3 - Insere e exibe Hor�rio
**********************************************************/
#include <ctype.h>
#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include "Horario.h"
#include <iomanip>

using namespace std;

int main()
{

    int iResposta = 0;
    int iCont = 1;

    Horario h1;
    Horario h2;
    Horario h3;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << setfill('0');

    h1.setHora(10);

    cout << "\nHor�rio 1:    " << setw(2) << h1.getHora() << ":" << setw(2) << h1.getMinuto() << ":" << setw(2) << h1.getSegundo();

    h2.setHora(10,12);

    cout << "\nHor�rio 2:    " << setw(2) << h2.getHora() << ":" << setw(2) << h2.getMinuto() << ":" << setw(2) << h2.getSegundo();

    h3.setHora(10,12,33);
    cout << "\nHor�rio 3:    ";
    h3.getHoraCompleta();

}
