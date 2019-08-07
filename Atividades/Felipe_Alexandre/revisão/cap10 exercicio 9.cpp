/**********************************************************
- Autor:     Felipe Alexandre
 cap 10 atividade 9
 Descrição:algoritmo que calcula o salário mais as comisões de um logista
 de acordo com o tanto de vendas feitas.
**********************************************************/

#include<iostream>
#include<stdio.h>
#include<cstdlib>

struct calculo
{
    float salf=0;
    float Somacomis=0;
    float venda[20];

};
int main()
{
    using namespace std;
    setlocale(LC_ALL,"");
    calculo caixa;
    int p=0;
    int z=1;
    cout<<"Bem vindo ao sistema de calculo de salário\n";
    cout<<"Digite os valores pedidos\nO salário fixo recebido: ";
    cin>>caixa.salf;
    cout<<"Quantas vendas foram feitas no mês? ";
    cin>>p;
     for(int i=0;i<p;i++)
     {
       cout<<"Digite o valor da "<<z++<<"ª venda: R$";
       cin>>caixa.venda[i];
       caixa.Somacomis=caixa.Somacomis+(caixa.venda[i]*6/100);
     }
    cout<<"Seu salário final é: R$"<<caixa.Somacomis+caixa.salf;
}
