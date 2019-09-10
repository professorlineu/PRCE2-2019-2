#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include "Horario.h"
using namespace std;


int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    int h = 00;
    int m = 00;
    int s = 00;

    Horario H;

    cout << "Insira um horario: ";
    cin >> h >> m >> s;
    H.setHora(h, m, s);
    H.getHoraCompleta();


}
