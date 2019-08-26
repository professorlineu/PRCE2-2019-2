/******************************
Auto: felipe alexandre da silva
atividade 15 capitulo 4
******************************/
#include<iostream>
#include<locale>
#include<cstdlib>
int main()
{
    using namespace std;
    setlocale(LC_ALL,"");
    int   esc=0;
    float val=0;
    float resul=0;
    cout<<"Bem vindo ao programa de calculo de investimentos"<<endl;
    cout<<"Digite o valor a ser aplicado no investimento:"<<endl;
    cin>>val;
    cout<<"Escolha a forma de investimento a ser calculada:\n1-poupança\n2-Fundo de renda fixa\n"<<endl;
    cin>>esc;
    switch(esc)
    {
    case 1:
        val=val*1.3;
        break;
    case 2:
        val=val*1.4;
        break;
    default:
    cout<<"Valor invalido";
    break;
    }
     if(esc<=2 && esc>=1)
   {
    cout<<"O valor do investimento ao decorrer de 1 mês é: R$"<<val<<endl;
   }

}
