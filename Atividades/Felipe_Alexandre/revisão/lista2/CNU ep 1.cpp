#include<iostream>
#include<cstdlib>
#include<stdio.h>

/******
Exercício de programação 2
linguagem:c/c++
aluno:Felipe Alexandre da Silva
*******/
using namespace std;
struct dados
{
    double a=0; //variaveis principais
    double b=0;
    double x=0;
    double e1=0;
    double e2=0;
    int cont=0;

};
double fun(double fNum)
{
    double fRes=0;
    fRes=((fNum*fNum*fNum)-9*(fNum)+3);
    return fRes;
}
double passo2(double p1,double p2)
{
    double r=0;
    r=p2-p1;
    if(r<0){r=r*-1;}
    return r;

}
double funx(double m1,double m2,double m3, double m4)
{
    double m=0;
    m=((m1*m3)-(m2*m4))/(m3-m4);
    return m;
}
double modulo(double valor)
{
    if(valor<0){valor=valor*-1;}
    return valor;
}

int main()
{
    setlocale(LC_ALL,"");

    dados d;
    int var=0; //variaveis para armazenamento
    double fa=0;
    double fb=0;
    double x=0;
    double fx=0;
    double M=0;
    double dif=0;
    printf("Bem vindo a interface de calculo da reaiz de uma função.\nO calculo será feito pelo método do ponto falso\n");//coleta de dados
    printf("Para a função f(x)=x³-9x+3\nDigite os valores do intervalo desejado na forma de (a,b): ");
    printf("\ndigite a: ");
    scanf("%lf",&d.a);
    printf("\ndigite b: ");
    scanf("%lf",&d.b);
    printf("Digite a precisão E desejada(exemplo: E=0,01): ");
    printf("primeira precisão e1:");
    scanf("%lf",&d.e1);
    printf("segunda precisão e2:");
    scanf("%lf",&d.e2);
    while(var!=1)//bloco com o loop
    {
        fa=fun(d.a);
        fb=fun(d.b);
        x=funx(d.a,d.b,fb,fa);
        dif=passo2(d.a,d.b);
        if(modulo(dif)<d.e1||modulo(fa)<d.e2||modulo(fb)<d.e2)
        {
            d.x=x;
            var=1;
        }
         d.cont++;
         M=fa;
         fx=fun(x);
          if(modulo(fx)<d.e2)
         {
             d.x=x;
             var=1;
         }


        if((M*fx)>0)
        {
            d.a=x;
        }
        if((M*fx)<0)
        {
            d.b=x;
        }
        if(modulo(dif)<d.e1)
        {
            d.x=x;
            var=1;
        }

    }
    printf("Foram feitos %d ciclos\n",d.cont);
    printf("Seu novo intervalo é:(%lf;%lf)\n",d.a,d.b);
    cout<<"O resultado da sua função para o erro "<<d.e1<<" e para o erro "<<d.e2<<" utlilizando o método do ponto falso é:\nx="<<d.x<<endl;
    /*******Observações:*********************************************************
    O programa criado pega os valores digitados pelo usuário e os usa para calcular o resultado da raiz
    através do método do ponto falso.
    Assim como o programa anterior foi feito um programa simples desconsiderando os erros do usuário, além de que o programa roda com qualquer
    intervalo que for posto e o erro do float foi corrigido e as variáveis foram convertidas para double.
    *****************************************************************************/
}
