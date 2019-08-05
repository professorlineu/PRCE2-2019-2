/******************************
Auto: felipe alexandre da silva
atividade 21 capitulo 5
******************************/
#include<iostream>
#include<stdio.h>
#include<cstdlib>

int main()
{
    using namespace std;
    setlocale(LC_ALL,"");
    int Num=0;
    int cand1=0;
    int cand2=0;
    int cand3=0;
    int cand4=0;
    float branco=0;
    float nulo=0;
    float total=0;
    float bporc=0;
    float nporc=0;
    cout<<" Bem vindo a interface de votos:"<<endl;
    cout<<"Digite o numero do candidato a se votar (1 a 4), caso o voto seja nulo digite 5 e para votos em branco digite 6."<<endl;
    cout<<"Para sair digite 0."<<endl;
    cout<<"Digite o número em que deseja votar: ";
    cin>>Num;
    if(Num>6 || Num<0)
    {
        Num=0;
        cout<<"Codigo invalido"<<endl;
    }
    while(Num!=0)
    {

       total++;
        if(Num)
        switch(Num)
        {
        case 1:
            cand1++;
            break;
        case 2:
            cand2++;
            break;
        case 3:
            cand3++;
            break;
        case 4:
            cand4++;
            break;
        case 5:
            nulo++;
            break;
        case 6:
            branco++;
            break;
        }
        cout<<"Digite o número em que deseja votar: ";
        cin>>Num;
         if(Num>6 ||Num<0)
    {
        Num=0;
        cout<<"Codigo invalido"<<endl;
    }
    }
   if(Num>0 && Num<7)
   {
    bporc=(branco/total)*100;
    nporc=(nulo/total)*100;
    printf("O total de votos para o 1ºcadidato é: %d\n",cand1);
    printf("O total de votos para o 2ºcadidato é: %d\n",cand2);
    printf("O total de votos para o 3ºcadidato é: %d\n",cand3);
    printf("O total de votos para o 4ºcadidato é: %d\n",cand4);
    printf("O total de votos nulos é: %2.0f\n",nulo);
    printf("O total de votos em branco é: %2.0f\n",branco);
    printf("A porcentagem de votos em branco é: %2.2f porcento\n",bporc);
    printf("A porcentagem de votos nulos é: %2.2f porcento\n",nporc);
   }
}//final do main
