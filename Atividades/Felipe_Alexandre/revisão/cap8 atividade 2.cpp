/******************************
Auto: felipe alexandre da silva
atividade 2 capitulo 8
******************************/
#include<iostream>
#include<locale>
#include<cstdlib>

int Calhora(int Num1,int Num2,int Num3)
{
   int Soma=0;
   Num1=Num1*3600;
   Num2=Num2*60;
   Soma=Num1+Num2+Num3;

   return Soma;
}

int main()
{
    using namespace std;
    setlocale(LC_ALL,"");

int one=0;
int tu=0;
int tri=0;
    cout<<"Digite tres numeros, que serão computados como hora,\n minuto e segundo, pra que seja calculado \no numero de segundos que a soma dos tres vale:\n";
   cout<<"Primeiro numero de horas\n";
   cin>>one;
   cout<<"Segundo numero de minutos\n";
   cin>>tu;
   cout<<"Terceiro numeor de segundos\n";
   cin>>tri;
    cout<<"O total de horas é "<<Calhora(one,tu,tri)<<" segundos";
}
