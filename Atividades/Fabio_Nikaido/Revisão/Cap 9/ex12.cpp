/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descrição: Lista 9 - Exercício 12
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string.h>

using namespace std;

int main()
{

    //Declaração de variáveis

    char cData[10];
    char cMes[10];
    int iCont=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa


    cout << "Digite a data no formato DD/MM/AAAA: ";
    cin >> cData;


    while(cData[3] != '0' && cData[3] != '1')
    {
        cout << "Erro" << endl;
        cout << "Digite um mês válido" << endl;

        cout << "Digite a data no formato DD/MM/AAAA: ";
        cin >> cData;
    }

    while(iCont<3)
    {
        cout << cData[iCont];
        iCont++;
    }


    if(cData[3] == '0')
    {
        if(cData[4] == '1')
        {
            cout << "Janeiro";
        }
        else if(cData[4] == '2')
        {
            cout << "Fevereiro";
        }
        else if(cData[4] == '3')
        {
            cout << "Março";
        }
        else if(cData[4] == '4')
        {
            cout << "Abril";
        }
        else if(cData[4] == '5')
        {
            cout << "Maio";
        }
        else if(cData[4] == '6')
        {
            cout << "Junho";
        }
        else if(cData[4] == '7')
        {
            cout << "Julho";
        }
        else if(cData[4] == '8')
        {
            cout << "Agosto";
        }
        else if(cData[4] == '9')
        {
            cout << "Setembro";
        }
    }

    else if(cData[3] == '1')
    {
        if(cData[4] == '1')
        {
            cout << "Novembro";
        }
        else if(cData[4] == '2')
        {
            cout << "Dezembro";
        }
    }

    iCont=5;

    while(iCont>4 && iCont<10)
    {
        cout << cData[iCont];
        iCont++;
    }




    return 1;
}

