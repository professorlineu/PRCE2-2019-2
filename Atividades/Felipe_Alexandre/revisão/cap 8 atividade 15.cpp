/******************************
Auto: felipe alexandre da silva
atividade 15 capitulo 8
******************************/
#include<iostream>
#include<stdio.h>
#include<cstdlib>
int pares(int v);
int main()
{
    setlocale(LC_ALL,"");
    using namespace std;
    int vetor[15];
    int val=0;
    int j=0;
    int i=0;
    int Num=0;
    for(i=0;i<15;i++)
    {
       cout<<"Digite um valor numérico inteiro:";
       cin>>vetor[i];
       Num=Num+pares(vetor[i]);
    }
cout<<Num;
}
int pares(int v)
{
    int cont=0;
   if(v%2==0)
   {
       cont++;
   }



    return cont;
}
