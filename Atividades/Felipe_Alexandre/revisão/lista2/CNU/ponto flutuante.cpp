#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<math.h>
/******
Exercício de programação 2
linguagem:c/c++
aluno:Felipe Alexandre da Silva
*******/
using namespace std;
struct dados3
{
    double a=0; //variaveis principais
    double b=0;
    double x=0;
    double x1=0;
    double x2=0;
    double xo=0;
    double e1=0;
    double e2=0;
    int cont=1;

};
double funfi(double dNum)
{
    double resp=0;
    resp=cos(dNum)-(pow(M_E,-(pow(dNum,2))))+dNum;
    return resp;
}
double fun3(double fNum)
{
    double fRes=0;
    fRes=pow(M_E,-(pow(fNum,2)))-cos(fNum);
    return fRes;
}
