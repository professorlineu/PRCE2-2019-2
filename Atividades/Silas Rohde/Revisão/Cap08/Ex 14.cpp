/**********************************************************
- Autor:     Silas Barboza Rohde
- Descrição: Lista de revisão - Cap08 ex 14
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int funcao()
{

    int vetor[30];
    int iCont=0;
    int iCont2=0;
    int iContMaior=0;
    int iContMenor=0;
    int iMaior[30];
    int iMenor[30];


    while(iCont<5)
    {
        cout << "Digite um valor inteiro positivo ou negativo: ";
        cin >> vetor[iCont];
        iCont++;
    }


    while(iCont2<5)
    {
        if(vetor[iCont2]>0)
        {
            iMaior[iContMaior] = vetor[iCont2];
            iContMaior++;
            iCont2++;
        }
        else if(vetor[iCont2<0])
        {

            iMenor[iContMenor] = vetor[iCont2];
            iContMenor++;
            iCont2++;
        }
    }

    cout << endl;

    for (int i=0;i<iContMaior;i++)
    {
        cout << iMaior[i] << " ";
    }

    cout << endl << endl;

    for (int j=0;j<iContMenor;j++)
    {
        cout << iMenor[j] << " ";
    }

    cout << endl;
}

int main()
{

    //Declaração de variáveis


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    funcao();


    return 1;
}
