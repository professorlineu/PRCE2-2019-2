/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descrição: Cap. 6 - Exercício 2
    Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
    -os números múltiplos de 2
    -os números múltiplos de 3
    -os números múltiplos de 2 e 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
  int vetor[7], i=0, iNum=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    for(i=0; i<7; i++)
    {
        cout<<"Informe um número inteiro: ";
        cin>> iNum;

        vetor[i]=iNum;
    }

    cout<<"\nNúmeros múltiplos de 2:"<<endl;
    for(i=0; i<7; i++)
    {
        if(vetor[i]%2 == 0)
        {
            cout<<vetor[i]<<endl;
        }
    }

    cout<<"\nNúmeros múltiplos de 3:"<<endl;
    for(i=0; i<7; i++)
    {
        if(vetor[i]%3 == 0)
        {
            cout<<vetor[i]<<endl;
        }
    }

     cout<<"\nNúmeros múltiplos de 2 e 3:"<<endl;
    for(i=0; i<7; i++)
    {
        if(vetor[i]%3 == 0 && vetor[i]%2 == 0)
        {
            cout<<vetor[i]<<endl;
        }
    }

    return 0;
}
