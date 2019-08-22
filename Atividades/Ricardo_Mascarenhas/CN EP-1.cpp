#include<iostream>
#include<cstdlib>
#include<stdio.h>

/******
Exercício de programação 1
linguagem:c/c++
aluno:Felipe Alexandre da Silva
*******/
using namespace std;
struct dados
{
    float a=0;
    float b=0;
    float fa=0;
    float fm=0;
    float x=0;
    float e=0;
    int cont=0;

};
float fun(float fNum)
{
    float fRes=0;
    fRes=((fNum*fNum*fNum)-9*(fNum)+3);
    return fRes;
}
float passo2(float p1,float p2)
{
    float r=0;
    r=p2-p1;
    return r;

}
float media(float m1,float m2)
{
    float m=0;
    m=(m1+m2)/2;
    return m;
}

int main()
{
    setlocale(LC_ALL,"");

    dados d;
    int var=0;
    printf("Bem vindo a interface de calculo da reaiz de uma função.\nO calculo será feito pelo método da bissecção\n");
    printf("Para a função f(x)=x³-9x+3\nDigite os valores do intervalo desejado na forma de (a,b): ");
    printf("\ndigite a: ");
    scanf("%f",&d.a);
    printf("\ndigite b: ");
    scanf("%f",&d.b);
    printf("Digite a precisão E desejada(exemplo: E=0,01): ");
    scanf("%f",&d.e);
    while(var!=1)
    {

        d.cont++;
        if(passo2(d.a,d.b)<d.e)
        {
            d.x=media(d.a,d.b);
            var=1;
        }
        d.fa=fun(d.a);
        d.x=media(d.a,d.b);
        d.fm=fun(d.x);
        if((d.fa*d.fm)>0)
        {
            d.a=d.x;
        }
        if((d.fa*d.fm)<0)
        {
            d.b=d.x;
        }
        if(passo2(d.a,d.b)<d.e)
        {
            d.x=media(d.a,d.b);
            var=1;
        }
    }
    printf("Foram feitos %d ciclos\n",d.cont);
    printf("Seu novo intervalo é:(%f,%f)\n",d.a,d.b);
    cout<<"O resultado da sua função para o erro "<<d.e<<" utlilizando o método da bissecção é:\nx="<<d.x<<endl;
    /*******Observações:*********************************************************
    No caso criei um programa simples que pega os valores do intervalo e da precissão e calcula usando o mmétodo
    aprendido em aula, além disso, não foi feito o tratamento de erro no programa por isso se valores diferentes dos
    estipulados forem digitados o programa cria um erro entrando em loop.
    Fora isso o programa funciona corretamente e pode calcular com intervalos maiores dos que os dados no exercício,como por exemplo (-2,3),
    ou outro intervalo que contenha um raiz,que ele encontra o resultado deacordo com a precisão indicada.
    *********************************************************************************/
}
