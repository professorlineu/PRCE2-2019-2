#include <iostream>
#include "Horario.h"

using namespace std;
int x = 0;
int y = 0;
int z = 0;
int sair;
int main()
{
    Horario H1;
    cout << "OBS: Se n quiser inserir o horário basta inserir 0 como um valor" << endl << endl;
    cout << "Informe a Hora atual: ";
    cin >> x;
    if (x == 0)
    {
        H1.Hora(x);
        H1.HoraCompleta();
        return 0;
    }

    cout << "Informe o minuto atual: ";
    cin >> y;

        if (y == 0) {
            H1.Hora(x,y);
            H1.HoraCompleta();
            return 0;
        }

    cout << "Informe o segundo atual: ";
    cin >> z;

    H1.Hora(x,y,z);
    H1.HoraCompleta();
    return 0;
}
