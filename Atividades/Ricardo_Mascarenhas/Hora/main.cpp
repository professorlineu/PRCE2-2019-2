#include <iostream>
#include "HORARIO.H"
#include <iomanip>

using namespace std;

int main()
{
    Horario h1;

    int iH = 0 ;
    int iM = 0 ;
    int iS = 0 ;


    cout << "Controle de sono" << endl;
    cout << "\n" ;

    cout << "Informe a hora em que voce deseja dormir: " << endl ;
    cin >> iH;
    h1.setHora(iH);

    cout << "Minutos: " << endl ;
    cin >> iM;
    h1.setHora(iH,iM);

    cout << "Segundos: " << endl;
    cin >> iS;
    h1.setHora(iH,iM,iS);

    cout << setfill('0');

     cout << "Horário: "
         << setw(2) << h1.getHora() << ":"
         << setw(2) << h1.getMinuto() << ":"
         << setw(2) << h1.getSegundo() << endl << endl;


}
