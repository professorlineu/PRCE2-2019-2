/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Converter horário em segundos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int converterSegundos (int iHora, int iMinuto, int iSegundo);

int main()
{
    ///Declaração de variáveis
    int iH = 0;
    int iMin = 0;
    int iSeg = 0;
    int iTotalSeg = 0;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    cout << "Insira as horas: ";
    cin >> iH;

    cout << "Insira os minutos: ";
    cin >> iMin;

    cout << "Insira os segundos: ";
    cin >> iSeg;

    iTotalSeg = converterSegundos(iH, iMin, iSeg);

    cout << endl << iH << "h, " << iMin << "min e " << iSeg << "s correspondem a " << iTotalSeg << " segundos\n";

    return 0;
}

int converterSegundos (int iHora, int iMinuto, int iSegundo)
{
    int iSegTotal = 0;

    iSegTotal = (iHora * 3600) + (iMinuto * 60) + iSegundo;

    return iSegTotal;
}
