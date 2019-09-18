/******************************
Auto: felipe alexandre da silva
atividade 20 capitulo 10
******************************/
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
using namespace std;
void funcional(int tec)
{
    if(tec>5)
    {
     exit(0);
    }
}
int main()
{

 setlocale(LC_ALL,"");
 int NumOS[5];
 int Num=0;
 int p=0;
 float maior=0;
 float Soma=0;
 float val[5];
 int choi=0;
 string data[5];
 string nome[5];

 cout<<"Quantas ordens de serviço devêm ser adicionadas?(maximo de 5 ordens) ";
 cin>>Num;
 funcional(Num);
 for(int i=0;i<Num;i++)
 {
   cout<<"Digite as informações pedidas:\nNúmero da ordem de serviço: ";
   cin>>NumOS[i];
   cout<<"Valor do serviço: R$";
   cin>>val[i];
   Soma=Soma+val[i];
   if(val[i]>maior)
    {
       maior=val[i];
       p=i;
    }
   cout<<"Descreva o serviço realizado:\n ";
   cout<<"1-Troca de peça\t2-revisão\t3-concerto de peças\n";
   cin>>choi;
   cout<<"Adicione o primeiro nome do cliente: ";
   cin>>nome[i];
   cout<<"Data do serviço: ";
   cin>>data[i];

 }

 cout<<"Média dos valores ficou em:R$";
 cout<<Soma/Num;
 cout<<"\nO valor mais caro foi de "<<maior<<endl;
 cout<<"O cliente relacionado a esse valor é: "<<nome[p]<<endl;
 cout<<"A ordem de serviço: ";
 switch(choi)
    {
    case 1:
         cout<<"troca de peça\n";
        break;
    case 2:
        cout<<"revisão\n";
        break;
    case 3:
         cout<<"concerto de peças\n";
        break;
    }
 cout<<"Data do serviço: "<<data[p]<<endl;
}

