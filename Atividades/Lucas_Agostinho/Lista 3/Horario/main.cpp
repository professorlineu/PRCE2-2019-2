/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Horário
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <iomanip>
#include "Horario.h"

using namespace std;

int main()
{
    ///Declaração de variáveis
    Horario horas;
    int iHora = 0;
    int iMinuto = 0;
    int iSegundo  = 0;
    int iOpt = 0;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    cout << "MENU\n1 - Hora" << "\n2 - Hora e Minuto" << "\n3 - Hora, Minuto e Segundo\n";

    cout << "\nInforme o que deseja inserir: ";
    cin >> iOpt;
    cout << endl;

    switch (iOpt)
    {
        case 1:
            cout << "Informe as horas: ";
            cin >> iHora;

            horas.setHora(iHora);

            break;

        case 2:
            cout << "Informe as horas: ";
            cin >> iHora;

            cout << "Informe os minutos: ";
            cin >> iMinuto;

            horas.setHora(iHora, iMinuto);

            break;

        case 3:
            cout << "Informe as horas: ";
            cin >> iHora;

            cout << "Informe os minutos: ";
            cin >> iMinuto;

            cout << "Informe os segundos: ";
            cin >> iSegundo;

            horas.setHora(iHora, iMinuto, iSegundo);

            break;
    }
    cout << endl;

    cout << setfill('0');
    horas.getHoraCompleta();

    return 0;
}
