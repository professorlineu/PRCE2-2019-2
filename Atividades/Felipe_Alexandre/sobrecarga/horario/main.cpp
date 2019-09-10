#include <iostream>
#include<stdio.h>
#include "Horario.h"
#include<iomanip>
using namespace std;

int main()
{
    Horario h1;
    Horario h2;
    Horario h3;
    int h=0;
    int m=0;
    int s=0;
    setlocale(LC_ALL,"");
    cout<<setfill('0');
    for(int i=0; i<3; i++)
    {
        cout<<"Digite o horario desejado:\n ";
        do
        {
            cout<<"Digite a hora: ";
            cin>>h;
        }
        while(h>24||h<0);
        do
        {
            cout<<"Digite os minutos: ";
            cin>>m;
        }
        while(m>60||m<0);
        do
        {
            cout<<"Digite os segundos: ";
            cin>>s;
        }
        while(s>60||s<0);
        if(i==0)
        {
            h1.setHora(h,m,s);
        }
        if(i==1)
        {
            h2.setHora(h,m,s);
        }
        if(i==2)
        {
            h3.setHora(h,m,s);
        }
    }
    cout<<"Horario 1: "<<setw(2)<<h1.getHora()<<":"<<setw(2)<<h1.getMinuto()<<":"<<setw(2)<<h1.getSegundo()<<endl;
    cout<<"Horario 2: "<<setw(2)<<h2.getHora()<<":"<<setw(2)<<h2.getMinuto()<<":"<<setw(2)<<h2.getSegundo()<<endl;
    cout<<"Horario 3: "<<setw(2)<<h3.getHora()<<":"<<setw(2)<<h3.getMinuto()<<":"<<setw(2)<<h3.getSegundo()<<endl;


}
