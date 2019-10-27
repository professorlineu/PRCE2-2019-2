/**********************************************************
- Autor:     Layane Quissak
- Descri��o: Cap 10 - Ex 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;

struct Acidentes
{
    string sEstado[15];
     int fNumA[15];
    float fNumV[15];

};

int main()
{

    Acidentes Ano2012;
    int iMaiorIndice = 0;
    string sEstadoMaiorIndice;
    int iMenorIndice = 0;
    string sEstadoMenorIndice;
    float fPercentVeiculos = 0;
    float fMedAcidentes = 0;
    int iTotalVeiculos = 0;
    int iQtdRegistros = 0;
    int i = 0;


    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Informe a quantidade de registros que ser�o cadastrados (max. 15): ";
    cin >> iQtdRegistros;
    cout << endl;

    cout << "Informe o nome do estado: ";
    cin >> Ano2012.sEstado[0];

    cout << "Informe o n�mero de ve�culos que circularam nesse estado em 2012: ";
    cin >> Ano2012.fNumV[0];

    cout << "Informe o n�mero de acidentes de tr�nsito em 2012: ";
    cin >> Ano2012.fNumA[0];

    iTotalVeiculos += Ano2012.fNumV[0];

    iMaiorIndice = Ano2012.fNumA[0];
    sEstadoMaiorIndice = Ano2012.sEstado[0];

    iMenorIndice = Ano2012.fNumA[0];
    sEstadoMenorIndice = Ano2012.sEstado[0];

    cout << endl;

    for (i = 1; i < iQtdRegistros; i++)
    {
        cout << "Informe o nome do estado: ";
        cin >> Ano2012.sEstado[i];

        cout << "Informe o n�mero de ve�culos que circularam nesse estado em 2012: ";
        cin >> Ano2012.fNumV[i];

        cout << "Informe o n�mero de acidentes de tr�nsito em 2012: ";
        cin >> Ano2012.fNumA[i];

        iTotalVeiculos += Ano2012.fNumV[i];

        if (Ano2012.fNumA[i] > iMaiorIndice)
        {
            iMaiorIndice = Ano2012.fNumA[i];
            sEstadoMaiorIndice = Ano2012.sEstado[i];
        }

        if (Ano2012.fNumA[i] < iMenorIndice)
        {
            iMenorIndice = Ano2012.fNumA[i];
            sEstadoMenorIndice = Ano2012.sEstado[i];
        }

        cout << endl;
    }

    cout << "\nO maior �ndice de acidentes de tr�nsito foi de " << iMaiorIndice << " acidentes, que ocorreu no estado " << sEstadoMaiorIndice << "\n\n";

    for (i = 0; i < iQtdRegistros; i++)
    {
        fPercentVeiculos = (Ano2012.fNumV[i] * 100) / iTotalVeiculos;

        fMedAcidentes = (Ano2012.fNumA[i]) / (Ano2012.fNumV[i]);

        cout << "O percentual de ve�culos no estado " << Ano2012.sEstado[i] << " � de " << fPercentVeiculos << "%\n";
        cout << "A m�dia de acidentes no estado " << Ano2012.sEstado[i] << " � de " << fMedAcidentes << " acidentes para cada ve�culo que circulou no estado\n\n";
    }

    return 0;
}
