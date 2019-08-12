/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descrição: Cap. 5 - Exercício 3
    Faça um programa que receba a idade de oito pessoas, calcule e mostre:
    a) a quantidade de pessoas em cada faixa etária
    b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas
    c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas

        1a      até 15 anos
        2a      de 16 a 30 anos
        3a      de 31 a 45 anos
        4a      de 46 a 60 anos
        5a      acima de 60 anos
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
  int idade=0, iPessoa=0, iFE1=0, iFE2=0, iFE3=0, iFE4=0, iFE5=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    for(iPessoa=0; iPessoa<8; iPessoa++)
    {
        cout<<"Informe a idade: ";
        cin>> idade;

        if(idade<16)
        {
            iFE1++;
        }
        else if(idade<31)
        {
            iFE2++;
        }
        else if(idade<46)
        {
            iFE3++;
        }
        else if(idade<61)
        {
            iFE4++;
        }
        else if(idade>60)
        {
            iFE5++;
        }
    }

    cout<<"Quantidade de pessoas em cada faixa etária:\n1a\t"<<iFE1<<"\n2a\t"<<iFE2<<"\n3a\t"<<iFE3<<"\n4a\t"<<iFE4<<"\n5a\t"<<iFE5<<endl;

    cout<<100*iFE1/8<<"% de pessoas estão na primeira faixa etária."<<endl;
    cout<<100*iFE5/8<<"% de pessoas estao na última faixa etária."<<endl;

    return 0;
}
