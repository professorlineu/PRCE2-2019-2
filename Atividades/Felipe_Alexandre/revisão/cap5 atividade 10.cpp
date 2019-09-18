/******************************
Auto: felipe alexandre da silva
atividade 10 capitulo 5
******************************/
#include<iostream>
#include<locale>
#include<cstdlib>

int main()
{
    using namespace std;
    setlocale(LC_ALL,"");
    int i=0;
    int Num=0;
    int Somapar=0;
    int Somapri=0;
    int j=1;
    for(i=0;i<10;i++)
    {
    cout<<"Digite o "<<j++<<"º numero: ";
    cin>>Num;
     if(Num%2==0)
     {
        Somapar=Num+Somapar;
     }
      if(Num%2!=0 && Num%3!=0)
      {
          Somapri=Num+Somapri;
      }
    }
  cout<<"a soma dos números primos é: "<<Somapri<<" a soma dos numeros pares é: "<<Somapar<<endl;

}
