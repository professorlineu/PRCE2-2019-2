/**********************************************************
- Autor:     Ricardo Mascraenhas
- Descrição: vetor
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iV[5] ;
    int iP = 0 ;
    int iI = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");


    //Código do programa

    cout << "Informe seis números: " << endl;
    cin >> iV[0] >> iV[1] >> iV[2] >> iV[3] >> iV[4]   ;



    if (iV[0] % 2 == 0)
    {
        iP++;
        cout << iV[0] << " é par. " << endl;
    }
    else
    {
        iI++;
        cout << iV[0] << " é ímpar. " << endl;
    }








    if (iV[1] % 2 == 0)
    {
        iP++;
        cout << iV[1] << " é par. " << endl;
    }
    else
    {
        iI++;
        cout << iV[1] << " é ímpar. " << endl;
    }





        if (iV[2] % 2 == 0)
    {
        iP++;
        cout << iV[2] <<  " é par. " << endl;
    }
    else
    {
        iI++;
        cout << iV[2] << " é ímpar. " << endl;
    }








    if (iV[3] % 2 == 0)
    {
        iP++;
        cout << iV[3] << " é par. " << endl;
    }
    else
    {
        iI++;
        cout << iV[3] << " é ímpar. " << endl;
    }








    if (iV[4] % 2 == 0)
    {
        iP++;
        cout << iV[4] << " é par. " << endl;
    }
    else
    {
        iI++;
        cout << iV[4] << " é ímpar. " << endl;
    }










    cout << endl ;

    cout << "Foram digitados " << iP << " números pares. " << endl ;

    cout << endl ;

    cout << "Foram digitados " << iI << " números ímpares. " << endl ;



    return 0;


}
