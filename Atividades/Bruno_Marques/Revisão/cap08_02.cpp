#include <iostream>
using namespace std;



int CalculoHora (int iHora, int iMin, int iSeg)
{
int iSegundosTotal;
iHora=iHora*3600;
iMin=iMin*60;
iSegundosTotal=iHora+iMin+iSeg;

return iSegundosTotal;
}

int main()
{
int hora=0;
int min=0;
int seg=0;
cout<<"Digite o valor das horas: ";
cin>>hora;
cout<<"Digite o valor dos minutos: ";
cin>>min;
cout<<"Digite o valor dos segundos: ";
cin>>seg;
cout<<"O tempo digitado equivale a: "<< CalculoHora (hora,min,seg)<<" segundos"<<endl;
}

