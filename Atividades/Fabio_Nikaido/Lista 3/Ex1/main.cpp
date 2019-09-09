#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include "Horario.h"

using namespace std;

int main()
{

    int a,b,c;
    a=0;
    b=0;
    c=0;

    Horario h1;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o Horário: ";
    cin >> a >> b >> c;

    h1.setHora(a,b,c);

    cout << "Hora(s): " << h1.getHora() << endl;
    cout << "Minuto(s): " << h1.getMinuto() << endl;
    cout << "Segundo(s): " << h1.getSegundo() << endl;

}
