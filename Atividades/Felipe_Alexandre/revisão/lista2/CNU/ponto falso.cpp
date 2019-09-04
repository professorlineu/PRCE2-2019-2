#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<math.h>
using namespace std;
struct dados1
{
    double a=0;
    double b=0;
    double x=0;
    double e1=0;
    double e2=0;
    int cont=0;

};
double fun1(double fNum)
{
    double fRes=0;
    fRes=pow(M_E,-(pow(fNum,2)))-cos(fNum);
    return fRes;
}
double passo21(double p1,double p2)
{
    double r=0;
    r=p2-p1;
    if(r<0)
    {
        r=r*-1;
    }
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
    if(valor<0)
    {
        valor=valor*-1;
    }
    return valor;
}

