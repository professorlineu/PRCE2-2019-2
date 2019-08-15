/**********************************************************
- Autor:     Leonardo Miurin
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int ResultHora(int iHora, int iMultHora);

int ResultMin(int iMin, int iMultMin);


int main()
{
    setlocale(LC_ALL,"");

    int iHora, iMin, iSeg;
    int iMultHora = 3600;
    int iMultMin = 60;
    int iConv;

    cout << "Informe as horas: " << endl;
    cin >> iHora;

    cout << "Informe os minutos: " << endl;
    cin >> iMin;

    cout << "Informe os segundos: " << endl;
    cin >> iSeg;

    iConv = ResultHora(iHora, iMultHora) + ResultMin(iMin, iMultMin) + iSeg;

    cout << "Conversão: " << iConv << endl;

    return 0;
}




int ResultHora(int iHora, int iMultHora){


    return iHora*iMultHora;
}

int ResultMin(int iMin, int iMultMin){


    return iMin*iMultMin;
}

