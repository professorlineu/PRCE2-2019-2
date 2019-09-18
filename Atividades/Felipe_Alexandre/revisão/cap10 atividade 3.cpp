/******************************
Auto: felipe alexandre da silva
atividade 3 capitulo 10
descrição:programa que registra as pessoas e faz calculo com os dados encontrados.
******************************/
#include<iostream>
#include<stdio.h>
#include<cstdlib>
struct dados
{
    char gen[50];
    float h[50];
    int idade[50];
    int maio=0;
    float soma=0;
    char cor[50];
    int Num=0;
    char choi='0';
    int conta=0;
    int contv=0;
    int contc=0;
    int conts=0;
    int contf=0;
    float contm=0;
    float contt=0;
};
void parada(int tec)
{
    if(tec>50 || tec<0)
    {
        exit(0);
    }
}
void correcao(char tec2)
{
    if(tec2!='a'||tec2!='A')
    {
        exit(0);
    }
    if(tec2!='v'||tec2!='V')
    {
        exit(0);
    }
    if(tec2!='c'||tec2!='C')
    {
        exit(0);
    }
}
void mascfem(char tec3)
{
    if(tec3!='m'||tec3!='M')
    {
        exit(0);
    }
    if(tec3!='f'||tec3!='F')
    {
        exit(0);
    }
}
int main()
{
    using namespace std;
    setlocale(LC_ALL,"");
    dados p;
    cout<<"Sistema de cadastro de habitantes\nDigite os dados pedidos:\n";
    cout<<"Quanta pessoas seram adicionadas(capacidade do sistema é de 50 pessoas)\n";
    cin>>p.Num;
    parada(p.Num);
    for(int i=0;i<p.Num;i++)
    {
     cout<<"Qual o sexo da pessoa(m-masculino,f-feminino):";
     cin>>p.gen[i];
     mascfem(p.gen[i]);
     cout<<"Qual a altura da pessoa(os numeros devem ser separados por . não ,): ";
     cin>>p.h[i];
     cout<<"Qual a idade da pessoa: ";
     cin>>p.idade[i];
     if(p.idade[i]>p.maio)
     {
         p.maio=p.idade[i];
     }
     cout<<"Qual a cor dos olhos da pessoa\nA-azul  V-verdes  C-castanho\n";
     cin>>p.choi;
     correcao(p.choi);
     p.contt++;
     switch(p.choi)
     {
        case 'A':
        p.conta++;
        break;
        case 'a':
        p.conta++;
        break;
        case 'v':
        p.contv++;
        break;
        case 'V':
        p.contv++;
        break;
        case 'c':
        p.contc++;
        break;
        case 'C':
        p.contc++;
        break;
     }
     if(p.gen[i]=='m'||p.gen[i]=='M')
     {
         p.contm++;
     }
     if(p.gen[i]=='f'||p.gen[i]=='F')
     {
         if(p.idade[i]>=20 && p.idade[i]<=45)
         {
             p.contf++;
         }
     }
     if(p.choi=='v'||p.choi=='v')
     {
         if(p.h[i]<1.70)
         {
            p.contf++;
         }
     }
     if(p.choi=='c'||p.choi=='C')
     {
         if(p.h[i]>1.60)
         {
            p.soma=p.soma+p.idade[i];
            p.conts++;
         }
     }
    }//fin do for
if(p.conts==0){p.conts=1;}
cout<<"Média das idades das pessoas com olhos castanhos e altura superior a 1,60m: "<<p.soma/p.conts++<<endl;
cout<<"A maior idade entre os habitantes: "<<p.maio<<endl;
cout<<"A quantidade de pessoas do sexo feminino\ncom idade entre 20 e 45 anos ou que tenham olhos verdes\ne altura inferior a 1,70m: "<< p.conts<<endl;
cout<<"Percentual de homens: "<<(p.contm/p.contt)*100<<"%"<<endl;
}
