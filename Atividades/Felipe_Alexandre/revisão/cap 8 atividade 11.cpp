/******************************
Auto: felipe alexandre da silva
atividade 11 capitulo 8
******************************/
#include<iostream>
#include<stdio.h>
#include<cstdlib>
float soma(int p);
int main()
{
    setlocale(LC_ALL,"");
    using namespace std;
    int Num=0;
  cout<<"Digite o numero de parcelas da divisão que seja inteiro e positivo:";
  cin>>Num;
  cout<<"\nO valor da soma com o numero de parcelas informado é:"<<soma(Num)<<endl;

}
float soma(int p)
{
    float s=0;
    float j=0;
   s=(p*p)+1;
   j=p+3;
   return (s/j);
}
