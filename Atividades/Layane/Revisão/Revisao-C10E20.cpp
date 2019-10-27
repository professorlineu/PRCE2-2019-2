/******************************
- Autor:     Layane Quissak
- Descrição: C10E20
******************************/
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<cstring>
using namespace std;
void funcional(int tec)
{
    if(tec>5)
    {
        exit(0);
    }
}
int main()
{

    setlocale(LC_ALL,"");
    int NumOS[5];
    int Num=0;
    int p=0;
    float maior=0;
    float Soma=0;
    float val[5];
    int opt=0;
    string data[5];
    string nome[5];

    setlocale(LC_ALL,"");
    system("color F1");

    cout<<"Quantas ordens de serviço serão adicionadas?"<<endl;
    cin>>Num;
    funcional(Num);
    for(int i=0; i<Num; i++)
    {
        cout<<"Número da ordem de serviço: ";
        cin>>NumOS[i];
        cout<<"Valor do serviço: R$";
        cin>>val[i];
        Soma=Soma+val[i];
        if(val[i]>maior)
        {
            maior=val[i];
            p=i;
        }
        cout<<"Descreva o serviço realizado: "<<endl;
        cout<<"1-Troca de peça"<<endl<<"2-Revisão"<<endl<<"3-Conserto de peças"<<endl;
        cin>>opt;
        cout<<"Adicione o primeiro nome do cliente: ";
        cin>>nome[i];
        cout<<"Data do serviço: ";
        cin>>data[i];

    }

    cout<<endl<<"Média dos valores ficou em:R$";
    cout<<Soma/Num;
    cout<<"\nO maior valor foi de "<<maior<<endl;
    cout<<"O cliente responsável por esse valor foi: "<<nome[p]<<endl;
    cout<<"A ordem de serviço: ";
    switch(opt)
    {
    case 1:
        cout<<"Troca de peça\n";
        break;
    case 2:
        cout<<"Revisão\n";
        break;
    case 3:
        cout<<"Conserto de peças\n";
        break;
    }
    cout<<"Data do serviço: "<<data[p]<<endl;
}
