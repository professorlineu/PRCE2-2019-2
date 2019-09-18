#include <iostream>
#include"ProFilmes.h"
#include<string.h>
#include<time.h>
using namespace std;
int main()
{
    ProFilmes pf[2];
    setlocale(LC_ALL,"");
    int ID=0;
    string Nome="";
    int Data=0;
    int Y=0;
    cout<<"Interface de registro de filmes:\n";
    pf[0].setYear(Y);
    Y=pf[0].getYear();
    for(int i=0; i<2; i++)
    {
        cout<<"Digite o valor do ID do filme: ";
        cin>>ID;
        cout<<"\nDigite o nome do filme: ";
        cin.ignore();
        getline(cin,Nome);
        do
        {
            cout<<"\nDigite o ano de lançamento do filme: ";
            cin>>Data;
            if(Data>Y||Data<1895)
            {
                cout<<"\nData invalida!\n";
            }
        }
        while(Data>Y||Data<1895);
        pf[i].setIDf(ID);
        pf[i].setNomef(Nome);
        pf[i].setAnolf(Data);
    }

    for(int i=0; i<2; i++)
    {
        cout<<"\nFilmes digitados:\n ";
        cout<<"ID do filme: "<<pf[i].getIDf()<<endl;
        cout<<"Nome do filme: "<<pf[i].getNomef()<<endl;
        cout<<"Ano do filme: "<<pf[i].getAnolf()<<endl;
    }

}
