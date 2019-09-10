#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include "Horario.h"

using namespace std;

int main()
{

    int Sair = 0;
    int a,b,c;
    int iCont = 1;


    a=0;
    b=0;
    c=0;

    Horario h1;

    setlocale(LC_ALL,"");
    system("color F1");

    while(Sair =! 0)
    {

        cout << "Digite o Horário: ";
        cin >> a >> b >> c;

        h1.setHora(a,b,c);


        cout << "Horario " << iCont << ": ";
        h1.getHoraCompleta();

        cout << endl;

        cout << "Digite 0 para sair ou outro numero para continuar: ";
        cin >> Sair;

        if(Sair == 0)
        {
            return 0;
        }

        iCont++;
        cout << endl;
    }
}

