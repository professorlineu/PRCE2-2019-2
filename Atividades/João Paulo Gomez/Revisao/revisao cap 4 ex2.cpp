/**********************************************************
- Autor:     João Paulo dos Santos Gomez
- Descrição: Cap 4 revisao ex 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
float fNum1;
float fNum2;
float fSub;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout<<"Digite o primeiro número:";
    cin>>fNum1;

    cout<<"Digite o segundo número:";
    cin>>fNum2;

    fSub=fNum1-fNum2;

    if(fSub<0){
    cout<<"O menor número é o "<<fNum1;
    }
    else if(fSub>0){
    cout<<"O menor número é o "<<fNum2;
    }
    else
    cout<<"Os números são iguais!";




    return 0;
}
