/******************************
- Autor:     Layane Quissak
- Descri��o: C10E20
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

    cout<<"Quantas ordens de servi�o ser�o adicionadas?"<<endl;
    cin>>Num;
    funcional(Num);
    for(int i=0; i<Num; i++)
    {
        cout<<"N�mero da ordem de servi�o: ";
        cin>>NumOS[i];
        cout<<"Valor do servi�o: R$";
        cin>>val[i];
        Soma=Soma+val[i];
        if(val[i]>maior)
        {
            maior=val[i];
            p=i;
        }
        cout<<"Descreva o servi�o realizado: "<<endl;
        cout<<"1-Troca de pe�a"<<endl<<"2-Revis�o"<<endl<<"3-Conserto de pe�as"<<endl;
        cin>>opt;
        cout<<"Adicione o primeiro nome do cliente: ";
        cin>>nome[i];
        cout<<"Data do servi�o: ";
        cin>>data[i];

    }

    cout<<endl<<"M�dia dos valores ficou em:R$";
    cout<<Soma/Num;
    cout<<"\nO maior valor foi de "<<maior<<endl;
    cout<<"O cliente respons�vel por esse valor foi: "<<nome[p]<<endl;
    cout<<"A ordem de servi�o: ";
    switch(opt)
    {
    case 1:
        cout<<"Troca de pe�a\n";
        break;
    case 2:
        cout<<"Revis�o\n";
        break;
    case 3:
        cout<<"Conserto de pe�as\n";
        break;
    }
    cout<<"Data do servi�o: "<<data[p]<<endl;
}
