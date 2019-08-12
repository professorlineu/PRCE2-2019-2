/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descrição: Cap. 5 - Exercício 20
    Faça um programa que apresente o menu de opções a seguir:
        1.  Média aritmética
        2.  Média ponderada
        3.  Sair
    Na opção 1: receber duas notas, calcular e mostrar a média aritmética
    Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada
    Na opção 3: sair do programa
    Verifique a possibilidade de opção inválida.Neste caso, o programa deverá mostrar uma mensagem
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iOp=0;
    float fNota1 , fNota2 , fNota3 ,fPeso1 , fPeso2 , fPeso3 ;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    do
    {
            cout<<"Menu de opções:\n1\tMédia aritmética\n2\tMédia ponderada\n3\tSair"<<endl;
            cout<<"Digite a opção desejada: ";
            cin>> iOp;

            switch(iOp)
            {
            case 1:

                fNota1=0;
                fNota2=0;
                cout<<"Informe duas notas: ";
                cin>> fNota1 >> fNota2;

                cout<<"A média das notas é: "<< (fNota1+fNota2)/2<<endl;
            break;
            case 2:

                fNota1=0;
                fNota2=0;
                fNota3=0;
                fPeso1=0;
                fPeso2=0;
                fPeso3=0;
                cout<<"Informe três notas: ";
                cin>> fNota1 >> fNota2 >> fNota3;

                cout<<"informe o peso de cada nota respectivamente: ";
                cin >> fPeso1 >> fPeso2 >> fPeso3;

                cout<<"A média ponderada é: "<<(fNota1*fPeso1)+(fNota2*fPeso2)+(fNota3*fPeso3)<<endl;
            break;
            case 3:
                cout<<"Programa finalizado."<<endl;
            break;
            default:
                cout<<"Opção inválida."<<endl;
            break;
            }

    }while (iOp!=3);

    return 0;
}
