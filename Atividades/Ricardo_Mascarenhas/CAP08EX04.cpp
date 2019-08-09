/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descrição: Volume de uma esfera
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;



void Volume (float a);


int main()
{
    //Declaração de variáveis
    float fRaio =0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "CALCULANDO O VOLUME DE UMA ESFERA" << endl ;

    cout << endl ;

    cout << "Informe o raio da esfera: " << endl ;
    cin >> fRaio ;

    Volume (fRaio);


    return 0;
}

void Volume (float a)
{
    float fV = 0;

    fV = (4*(a*a*a))/3 ;

    cout << "O volume de uma esfera com raio " << a << " é de " << fV << " unidades (l/ml...).  " << endl ;
}



