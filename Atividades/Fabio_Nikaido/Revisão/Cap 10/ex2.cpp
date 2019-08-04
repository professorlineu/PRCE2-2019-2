/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descrição: Lista 9 - Exercício 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string.h>

using namespace std;

struct calculo
{
    int iCont2=0;
    int iSal[20];
    int iIdade[20];
    int iFilhos[20];

    int media=0;
    int mediaf=0;
    int maior=0;
    int superior=0;

};


int main()
{

    //Declaração de variáveis

    int iCont=0;
    int iCont2=0;
    calculo teste;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa


    while(iCont<=20)
    {
        cout << "Digite o seu salário: ";
        cin >> teste.iSal[iCont];

        cout << "Digite sua idade: ";
        cin >> teste.iIdade[iCont];

        cout << "Digite o número de filhos: ";
        cin >> teste.iFilhos[iCont];

        iCont++;
    }

    while(iCont2<=20)
    {
        teste.media = teste.iSal[iCont2] + teste.media;
        iCont2++;
    }

    cout << "A média de salário da população é: " << teste.media/iCont2 << endl;

    iCont2=0;

    while(iCont2<=20)
    {
        teste.mediaf = teste.iFilhos[iCont2] + teste.mediaf;
        iCont2++;
    }

    cout << "A média do número de filhos é: " << teste.mediaf/iCont2 << endl;

    iCont2=0;

    while(iCont2<=20)
    {
        if(teste.maior<teste.iSal[iCont2])
        {
            teste.maior = teste.iSal[iCont2];
        }

        iCont2++;
    }

    cout << "O maior salário é: " << teste.maior << endl;

    iCont2=0;

    while(iCont2<=20)
    {
        if(teste.iSal[iCont2]>1000)
        {
            teste.superior++;
        }
    }

    cout << "O percentual de mulheres com salário superior a R$ 1.000,00 é: " << (teste.superior/iCont2)*100;

    return 1;
}

