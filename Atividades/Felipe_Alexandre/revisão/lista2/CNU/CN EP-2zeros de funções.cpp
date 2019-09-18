#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<math.h>
#include "ponto falso.cpp"
#include "Bisseccao.cpp"
#include "ponto flutuante.cpp"
/******
Exercício de programação 2
linguagem:c/c++
aluno:Felipe Alexandre da Silva
*******/
using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    dados2 d;
    int var1=0;
    int alternativa=0;
    dados1 g;
    int var2=0;
    double fa=0;
    double fb=0;
    double x=0;
    double fx=0;
    double M=0;
    double dif=0;
    cout<<"Bem vindo a interface de calculo de zeros de funções reais.\nA função a ser calculada é a função [e^(-x²)]-cos(x)."<<endl;
    cout<<"Escolha o metodo de calculo\n0-sair\t1-Bissecção\t2-Posição falsa\t3-ponto flutuante"<<endl;
    cin>>alternativa;
    switch(alternativa)
    {
    case 0:
        exit(0);
    case 1:

        printf("Bem vindo a interface de calculo da reaiz de uma função.\nO calculo será feito pelo método da bissecção\n");
        printf("Para a função [e^(-x²)]-cos(x)\nDigite os valores do intervalo desejado na forma de (a,b): ");
        printf("\ndigite a: ");
        scanf("%lf",&d.a);
        printf("\ndigite b: ");
        scanf("%lf",&d.b);
        printf("Digite a precisão E desejada(exemplo: E=0,01): ");
        scanf("%lf",&d.e);
        while(var1!=1)
        {

            d.cont++;
            if(passo22(d.a,d.b)<d.e)
            {
                d.x=media(d.a,d.b);
                var1=1;
            }
            d.fa=fun2(d.a);
            d.x=media(d.a,d.b);
            d.fm=fun2(d.x);
            if((d.fa*d.fm)>0)
            {
                d.a=d.x;
            }
            if((d.fa*d.fm)<0)
            {
                d.b=d.x;
            }
            if(passo22(d.a,d.b)<d.e)
            {
                d.x=media(d.a,d.b);
                var1=1;
            }
        }
        printf("Foram feitos %d ciclos\n",d.cont);
        printf("Seu novo intervalo é:(%lf,%lf)\n",d.a,d.b);
        cout<<"O resultado da sua função para o erro "<<d.e<<" utlilizando o método da bissecção é:\nx="<<d.x<<endl;
        break;
    case 2:

        printf("Bem vindo a interface de calculo da reaiz de uma função.\nO calculo será feito pelo método do ponto falso\n");//coleta de dados
        printf("Para a função [e^(-x²)]-cos(x)\nDigite os valores do intervalo desejado na forma de (a,b): ");
        printf("\ndigite a: ");
        scanf("%lf",&g.a);
        printf("\ndigite b: ");
        scanf("%lf",&g.b);
        printf("Digite a precisão E desejada(exemplo: E=0,01): ");
        printf("primeira precisão e1:");
        scanf("%lf",&g.e1);
        printf("segunda precisão e2:");
        scanf("%lf",&g.e2);
        while(var2!=1)//bloco com o loop
        {
            fa=fun1(g.a);
            fb=fun1(g.b);
            x=funx(g.a,g.b,fb,fa);
            dif=passo21(g.a,g.b);
            if(modulo(dif)<g.e1||modulo(fa)<g.e2||modulo(fb)<g.e2)
            {
                g.x=x;
                var2=1;
            }
            g.cont++;
            M=fa;
            fx=fun1(x);
            if(modulo(fx)<g.e2)
            {
                g.x=x;
                var2=1;
            }


            if((M*fx)>0)
            {
                g.a=x;
            }
            if((M*fx)<0)
            {
                g.b=x;
            }
            if(modulo(dif)<g.e1)
            {
                g.x=x;
                var2=1;
            }

        }
        printf("Foram feitos %d ciclos\n",g.cont);
        printf("Seu novo intervalo é:(%lf;%lf)\n",g.a,g.b);
        cout<<"O resultado da sua função para o erro "<<g.e1<<" e para o erro "<<g.e2<<" utlilizando o método do ponto falso é:\nx="<<g.x<<endl;
        break;
    case 3:
    dados3 p;
    int var3=0;
    double med=0;
    double fixo=0;
    double fxo=0;
    double fx1=0;
    printf("Bem vindo a interface de calculo da reaiz de uma função.\nO calculo será feito pelo método do ponto flutuante através da função P=cos(x)-e^-x²\n");
    printf("Para a função [e^(-x²)]-cos(x)\nDigite o valor de xo: ");
    scanf("%lf",&p.xo);
    printf("Digite a precisão E desejada(exemplo: E=0,01): ");
    printf("primeira precisão e1:");
    scanf("%lf",&p.e1);
    printf("segunda precisão e2:");
    scanf("%lf",&p.e2);

    fxo=fun3(p.xo);
    fixo=funfi(p.xo);
    if(modulo(fxo)<p.e1)
    {
        p.x=p.xo;
        var3=1;
    }

    while(var3!=1)
    {
        p.x1=fixo;
        fx1=fun3(p.x1);
        if(modulo(fx1)<p.e1||modulo(p.x1-p.xo)<p.e2)
        {
            p.x=p.xo;
            var3=1;
        }
        p.xo=p.x1;
        p.cont++;

    }
    printf("Foram feitos %d ciclos\n",p.cont);
    cout<<"O resultado da sua função para o erro "<<p.e1<<" e para o erro "<<p.e2<<" utlilizando o método do ponto falso é:\nx="<<p.x<<endl;

    }


}
