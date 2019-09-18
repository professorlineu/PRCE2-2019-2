/**
autor:felipe alexandre da silva
cap 6 atividade 6
***/

#include<iostream>
#include<stdio.h>
#include<cstdlib>

int main()
{
    using namespace std;
    setlocale(LC_ALL,"");
   float Tvenda[10];
   float Pcomiss[10];
   string nomes[10];
   int i=0;
   float Somav=0;
   float var1=0;
   float var2=0;
   int j=0;
   int k=0;
for(i=0;i<10;i++)
{
    cout<<"Digite o nome do vendedor: ";
    cin>>nomes[i];
    cout<<"Digite o valor total de vendas: R$";
    cin>>Tvenda[i];
    Pcomiss[i]=Tvenda[i]*0.1;
    /** no caso coloquei a comissão como 10% do total de vendas para todos os vendedores **/
    Somav=Tvenda[i]+Somav;
    if(Pcomiss[i]>var1)
    {
        var1=Pcomiss[i];
        j=i;
    }
    var2=Pcomiss[k];
    if(Pcomiss[i]<var2)
    {
        var2=Pcomiss[i];
        k=i;
    }
}
    for(i=0;i<10;i++)
   {
   cout<<"********************************************************************"<<endl;
     cout<<"Vendedor: "<<nomes[i]<<endl;
     cout<<"Valor a receber por comissão: R$"<<Pcomiss[i]<<endl;
   cout<<"********************************************************************"<<endl;
   }
  cout<<"Total de vendas de todos os vendedores(sem comissão):R$"<<Somav<<endl;
  cout<<"Maior valor de comissão é:R$"<<var1<<"\nO vendedor que teve essa comissão foi: "<<nomes[j]<<endl;
  cout<<"Menor valor de comissão é:R$"<<var2<<"\nO vendedor que teve essa comissão foi: "<<nomes[k]<<endl;
}//fin do main

