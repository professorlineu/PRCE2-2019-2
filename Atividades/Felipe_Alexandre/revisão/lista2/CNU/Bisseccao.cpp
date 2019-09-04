#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<math.h>
using namespace std;
struct dados2
{
    double a=0;
    double b=0;
    double fa=0;
    double fm=0;
    double x=0;
    double e=0;
    int cont=0;

};
double fun2(double fNum)
{
   double fRes=0;
    fRes=pow(M_E,-(pow(fNum,2)))-cos(fNum);
    return fRes;
}
double passo22(double p1,double p2)
{
    double r=0;
    r=p2-p1;
    return r;

}
double media(double m1,double m2)
{
    double m=0;
    m=(m1+m2)/2;
    return m;
}

