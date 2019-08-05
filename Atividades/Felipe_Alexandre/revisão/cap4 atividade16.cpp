/******************************
Auto: felipe alexandre da silva
atividade 16 capitulo 4
******************************/
#include<iostream>
#include<locale>
#include<cstdlib>

int main()
{
    using namespace std;
    setlocale(LC_ALL,"");
    int  cod=0;
    float pre=0;
    float desc=0;
    string p1="tennis";
    string p2="Calça";
    string p3="Bermuda";
    cout<<"digite o código do produto(12-tennis,13-calça ou 14-bermuda): "<<endl;
    cin>>cod;
    cout<<"digite o preço do produto:R$";
    cin>>pre;
   if(pre>30 && pre<=100)
   {
      desc=pre*0.1;
      pre=pre*0.9;
   }
    if(pre>100)
   {
       desc=pre*0.15;
       pre=pre*0.85;
   }
   if(cod==12)
   {
       cout<<"O produto escolhido foi: "<<p1<<endl;
   }
    if(cod==13)
   {
       cout<<"O produto escolhido foi: "<<p2<<endl;
   }
    if(cod==14)
   {
       cout<<"O produto escolhido foi: "<<p3<<endl;
   }
 cout<<" o preço final do produto é:R$"<<pre<<endl;
 cout<<" o valor do desconto é: R$"<<desc<<endl;
}//final do main
