#include <iostream>
#include"IDclient.h"
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    //variáveis e classes
    IDclient idc[30];
    char reg='0';
    int id=0;
    string sNome;
    int iIdade=0;;
    int Num=0;
    string sEmail;
    string sCidade;


    cout<<"Interface de registro e verificação de email.\n";
    cout<<"Deseja adicionar registro?(sim-s,não-n)\n";
    cin>>reg;
    if(reg=='s'||reg=='S')
    {
        cout<<"Quantos registros serão adicionados? ";
        cin>>Num;
    }
    switch(reg)
    {
    case 'n':
        return(0);
        break;
    case 'N':
        return(0);
        break;
    case 's':
        for(int i=0; i<Num; i++)
        {
            cout<<"Informe os dados pedidos abaixo:\n";
            cout<<"Informe o ID: ";
            cin>>id;
            cout<<"Informe o nome: ";
            cin.ignore();
            getline(cin,sNome);
            cout<<"Informe o idade: ";
            cin>>iIdade;
            cout<<"Informe o email: ";
            cin.ignore();
            getline(cin,sEmail);
            cout<<"Informe o cidade: ";
            getline(cin,sCidade);

            idc[i].setID(id);
            idc[i].setNome(sNome);
            idc[i].setIdade(iIdade);
            idc[i].setEmail(sEmail);
            idc[i].setCidade(sCidade);
        }
        break;
    case 'S':
        for(int i=0; i<Num; i++)
        {
            cout<<"Informe os dados pedidos abaixo:\n";
            cout<<"Informe o ID: ";
            cin>>id;
            cout<<"Informe o nome: ";
            cin.ignore();
            getline(cin,sNome);
            cout<<"Informe o idade: ";
            cin>>iIdade;
            cout<<"Informe o email: ";
            cin.ignore();
            getline(cin,sEmail);
            cout<<"Informe o cidade: ";
            getline(cin,sCidade);
            idc[i].setID(id);
            idc[i].setNome(sNome);
            idc[i].setIdade(iIdade);
            idc[i].setEmail(sEmail);
            idc[i].setCidade(sCidade);
        }
        break;

    }
    cout<<""<<endl<<endl;
    for(int i=0; i<Num; i++)
    {
        cout<<"Dados do cliente:\n";
        cout<<"ID: "<<idc[i].getID()<<endl;
        cout<<"Nome: "<<idc[i].getNome()<<endl;
        cout<<"Idade: "<<idc[i].getIdade()<<endl;
        cout<<"Email: "<<idc[i].getEmail()<<endl;
        cout<<"Cidade: "<<idc[i].getCidade()<<endl<<endl;
    }


}
