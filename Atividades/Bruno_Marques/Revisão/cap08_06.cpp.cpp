#include <iostream>
using namespace std;
char cSexo=0;
float altura=0;

float CalcpesoH (float altura)
{

float fPeso=0;
fPeso=(altura*72.7)-58;

return fPeso;
}

float CalcpesoM (float altura)
{

float fPeso=0;
fPeso=(altura*62.1)-44.7;

return fPeso;
}

int main()
{
int raio=0;

cout<<"Calculo do peso ideal: "<<endl;
cout<<"Homem ou Mulher?"<<endl;
cout<<"H para homem e M para mulher"<<endl;
cin>> cSexo;

if (cSexo=='h')
{
cout<<"Qual a sua altura?";
cin>>altura;
cout<<"O seu peso ideal é: "<< CalcpesoH (altura) <<endl;
}

if (cSexo=='m')
cout<<"Qual a sua altura?";
cin>>altura;
cout<<"O seu peso ideal é: "<< CalcpesoH (altura) <<endl;

cin>> altura;
}