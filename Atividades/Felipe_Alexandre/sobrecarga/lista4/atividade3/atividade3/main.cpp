#include <iostream>
#include"ContaBancaria.h"
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    ContaBancaria Cb[2];
    char Incluir='0';
    int Ope=0;
    int var[2];
    int Num=0;
    int i=0;
    int Codcont=0;
    double Saldo[2];
    double Credito=0;
    double Debito=0;
    var[0]=1;
    var[1]=2;
    cout<<"Benvindo a interface do banco AB!\n";
    cout<<"Deseja incluir contas?\ns/n\n";
    cin>>Incluir;
    switch(Incluir)
    {
    case 's':
        do
        {
            cout<<"Quantas conta a serem incluidas?(capacidade do sistema:2 contas)\n";
            cin>>Num;
        }
        while(Num>2||Num<=0);

        for(int i=0; i<Num; i++)
        {
            Cb[i].setNconta(var[i]);
            cout<<"\nDigite o saldo da "<<i+1<<"ª conta:R$ ";
            cin>>Saldo[i];
            Cb[i].setSaldo(Saldo[i]);
        }
        break;
    case 'S':
        do
        {
            cout<<"Quantas conta a serem incluidas?(capacidade do sistema:2 contas)\n";
            cin>>Num;
        }
        while(Num>2||Num<=0);

        for(int i=0; i<Num; i++)
        {
            Cb[i].setNconta(var[i]);
            cout<<"\nDigite o saldo da "<<i+1<<"ª conta:R$ ";
            cin>>Saldo[i];
            Cb[i].setSaldo(Saldo[i]);
        }
        break;
    case 'n':
        cout<<"\nObrigado por utilizar nossos serviços! ";
        exit(0);
    case 'N':
        cout<<"\nObrigado por utilizar nossos serviços! ";
        exit(0);
    }
    for(int i=0; i<Num; i++)
    {
        cout<<"\nNúmero da conta: "<<Cb[i].getNconta()<<endl;
        cout<<"Valor do Saldo:R$"<<Cb[i].getSaldo()<<endl;

    }
    cout<<"\n\nDeseja fazer modificações na conta?\ns/n\n";
    cin>>Incluir;
    switch(Incluir)
    {
    case 's':
        do
        {
            cout<<"Digite o código da conta em que a modificação será feita: ";
            cin>>Codcont;
            if(Codcont!=Cb[0].getNconta()||Codcont!=Cb[1].getNconta())
            {
                cout<<"\nCódigo não constante no sistema!\nTente novamente!";
            }
        }
        while(Codcont!=Cb[0].getNconta()||Codcont!=Cb[1].getNconta());
        if(Codcont==Cb[0].getNconta())
        {
            i=0;
        }
        if(Codcont==Cb[1].getNconta())
        {
            i=1;
        }

        do
        {
            cout<<"\nOperações disponiveis:\n1-Credito-adiciona valores ao saldo\t2-Debito-Desconta valores do saldo";
            cin>>Ope;
        }
        while(Ope>2||Ope<0);


        switch(Ope)
        {
        case 1:
            cout<<"Digite o valor a ser creditado: R$";
            cin>>Credito;
            Cb[i].setCredito(Credito);
        case 2:
            cout<<"DIgite o valor a ser descontado: R$";
            cin>>Debito;
            Cb[i].setDebito(Debito);

        }
        break;
    case 'S':
        do
        {
            cout<<"\nOperações disponiveis:\n1-Credito-adiciona valores ao saldo\t2-Debito-Desconta valores do saldo";
            cin>>Ope;
        }
        while(Ope>2||Ope<0);


        switch(Ope)
        {
        case 1:
            cout<<"Digite o valor a ser creditado: R$";
            cin>>Credito;
            Cb[i].setCredito(Credito);
        case 2:
            cout<<"DIgite o valor a ser descontado: R$";
            cin>>Debito;
            Cb[i].setDebito(Debito);

        }
        break;
    case 'n':
        cout<<"nObigado por usar nosso sistema!\n";
        exit(0);
    case 'N':
        cout<<"nObigado por usar nosso sistema!\n";
        exit(0);
    }

}
