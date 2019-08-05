/******************************
Auto: felipe alexandre da silva
atividade 4 capitulo 8
******************************/
#include<iostream>
#include<stdio.h>
#include<cstdlib>
float volume (float raio);
int main()
{
    setlocale(LC_ALL,"");
    using namespace std;
    float raio=0;
    cout<<"Digite o raio da esfera(em centimetros):";
    cin>>raio;
     cout<<"O volume da esfera é:"<<volume(raio)<<"cm"<<endl;
}
float volume (float rai)
{
   float val=0;
   val=(rai*rai*rai*4*3)/3;
   return val;
}
