/**********************************************************
- Autor:     Silas Barboza Rohde
- Descrição: Lista de revisão - Cap08 ex 25
**********************************************************/
#include<iostream>
#include<stdio.h>
#include<cstdlib>


float calmed(float val1,float val2, float val3, float val4);
float repetente(float tent);
int main()
{
    setlocale(LC_ALL,"");
    using namespace std;
 int codal[10];
 float nota1=0;
 float nota2=0;
 float nota3=0;
 float nota4=0;
 int i=0;
 float vMed[10];
 float Med=0;
 int cont=0;
 int k=0;

   for(i=0;i<10;i++)
  {
 cout<<"Digite o código do aluno:";
 cin>>codal[i];
 cout<<"Digite a 1ª nota do aluno:";
 cin>>nota1;
 cout<<"Digite a 2ª nota do aluno:";
 cin>>nota2;
 cout<<"Digite a 3ª nota do aluno:";
 cin>>nota3;
 cout<<"Digite a 4ª nota do aluno:";
 cin>>nota4;
 vMed[i]=calmed(nota1,nota2,nota3,nota4);
 cout<<"a média do aluno "<<codal[i]<<" é: "<<vMed[i]<<endl;
   if(vMed[i]<6)
    {
       cont++;
    }
}
cout<<"O numero de repetentes "<<cont<<endl;
}
float calmed(float val1,float val2, float val3, float val4)
{
   float Med=0;
   Med=(val1+val2+val3+val4)/4;
   Med;
   return Med;
}
