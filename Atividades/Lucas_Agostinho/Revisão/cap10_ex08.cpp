/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição:
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;

struct acidentesTransito
{
    string sEstado[15];
    float fNumVeiculos[15];
    int fNumAcidentes[15];
};

int main()
{
    ///Declaração de variáveis
    acidentesTransito ano2012;
    int iMaiorIndice = 0;
    string sEstadoMaiorIndice;
    int iMenorIndice = 0;
    string sEstadoMenorIndice;
    float fPercentVeiculos = 0;
    float fMedAcidentes = 0;
    int iTotalVeiculos = 0;
    int iQtdRegistros = 0;
    int i = 0;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    cout << "Informe a quantidade de registros que serão cadastrados (max. 15): ";
    cin >> iQtdRegistros;
    cout << endl;

    cout << "Informe o nome do estado: ";
    cin >> ano2012.sEstado[0];

    cout << "Informe o número de veículos que circularam nesse estado em 2012: ";
    cin >> ano2012.fNumVeiculos[0];

    cout << "Informe o número de acidentes de trânsito em 2012: ";
    cin >> ano2012.fNumAcidentes[0];

    iTotalVeiculos += ano2012.fNumVeiculos[0];

    iMaiorIndice = ano2012.fNumAcidentes[0];
    sEstadoMaiorIndice = ano2012.sEstado[0];

    iMenorIndice = ano2012.fNumAcidentes[0];
    sEstadoMenorIndice = ano2012.sEstado[0];

    cout << endl;

    for (i = 1; i < iQtdRegistros; i++)
    {
        cout << "Informe o nome do estado: ";
        cin >> ano2012.sEstado[i];

        cout << "Informe o número de veículos que circularam nesse estado em 2012: ";
        cin >> ano2012.fNumVeiculos[i];

        cout << "Informe o número de acidentes de trânsito em 2012: ";
        cin >> ano2012.fNumAcidentes[i];

        iTotalVeiculos += ano2012.fNumVeiculos[i];

        if (ano2012.fNumAcidentes[i] > iMaiorIndice)
        {
            iMaiorIndice = ano2012.fNumAcidentes[i];
            sEstadoMaiorIndice = ano2012.sEstado[i];
        }

        if (ano2012.fNumAcidentes[i] < iMenorIndice)
        {
            iMenorIndice = ano2012.fNumAcidentes[i];
            sEstadoMenorIndice = ano2012.sEstado[i];
        }

        cout << endl;
    }

    cout << "\nO maior índice de acidentes de trânsito foi de " << iMaiorIndice << " acidentes, que ocorreu no estado " << sEstadoMaiorIndice << "\n\n";

    for (i = 0; i < iQtdRegistros; i++)
    {
        fPercentVeiculos = (ano2012.fNumVeiculos[i] * 100) / iTotalVeiculos;

        fMedAcidentes = (ano2012.fNumAcidentes[i]) / (ano2012.fNumVeiculos[i]);

        cout << "O percentual de veículos no estado " << ano2012.sEstado[i] << " é de " << fPercentVeiculos << "%\n";
        cout << "A média de acidentes no estado " << ano2012.sEstado[i] << " é de " << fMedAcidentes << " acidentes para cada veículo que circulou no estado\n\n";
    }

    return 0;
}
