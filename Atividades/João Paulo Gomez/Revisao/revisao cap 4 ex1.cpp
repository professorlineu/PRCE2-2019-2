/**********************************************************
- Autor:     João Paulo dos Santos Gomez
- Descrição: Cap 4. Revisão
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fNota1;
    float fNota2;
    float fNota3;
    float fNota4;
    float fMedia;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout<<"Digite a nota da primeira prova:";
    cin>>fNota1;

    cout<<"Digite a nota da segunda prova:";
    cin>>fNota2;

    cout<<"Digite a nota da terceira prova:";
    cin>>fNota3;

    cout<<"Digite a nota da quarta prova:";
    cin>>fNota4;

    fMedia=(fNota1+fNota2+fNota3+fNota4)/4;
    cout<<"Sua média é:"<<fMedia<<endl;

    if(fMedia>=7){
    cout<<"Parabéns, você foi aprovado!";
}
    else {
    cout<<"Você foi reprovado.";
    }



    return 0;
}
