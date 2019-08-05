/**********************************************************
- Autor:     Felipe Alexandre
 cap 11 atividade 1
 Descrição:criação de arquivos
**********************************************************/

#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<string.h>
int main()
{
   using namespace std;
    setlocale(LC_ALL,"");
    int Num=0;
    int Num2=0;
    int cod[4];
    char choi='0';
    string nome[4];
    string ender[4];
    string emiss[4];
    string venci[4];
   cout<<"Programa de cadastro de clientes\nQuantos clientes a cadastrar?(capacidade maxima de 4 cadastros)";
   cin>>Num;
   for(int i=0;i<Num;i++)
       {
       cout<<"Digite os dados a seguir:\nNome do cliente: ";
       cin>>nome[i];
       cout<<"Endereço do cliente ";
       cin>>ender[i];
       cout<<"Código do cliente: ";
       cin>>cod[i];
       cout<<"Data da emissão: ";
       cin>>emiss[i];
       cout<<"Vencimento do cliente:";
       cin>>venci[i];
       }
cout<<"Deseja adicionar mais cadastros s/n?(capacidade maxima do sistema de 4 cadastros) ";
cin>>choi;
switch(choi)
{
    case 's':
      cout<<"indique a quantidade de cadastros\n(cadastros ja utilizados "<<Num<<endl;
      cin>>Num2;
      for(int i=0;i<Num2&&i>Num;i++)
       {
       cout<<"Digite os dados a seguir:\nNome do cliente: ";
       cin>>nome[i];
       cout<<"Endereço do cliente: ";
       cin>>ender[i];
       cout<<"Código do cliente: ";
       cin>>cod[i];
       cout<<"Data da emissão: ";
       cin>>emiss[i];
       cout<<"Vencimento do cliente:";
       cin>>venci[i];
       }
       break;
       case 'S':
      cout<<"indique a quantidade de cadastros\n(cadastros ja utilizados "<<Num<<endl;
      cin>>Num2;
      Num2=Num2+Num;
      for(int i=0;i<Num2&&i>Num;i++)
       {
       cout<<"Digite os dados a seguir:\nNome do cliente: ";
       cin>>nome[i];
       cout<<"Endereço do cliente: ";
       cin>>ender[i];
       cout<<"Código do cliente: ";
       cin>>cod[i];
       cout<<"Data da emissão: ";
       cin>>emiss[i];
       cout<<"Vencimento do cliente: ";
       cin>>venci[i];
       }
       break;

}

for(int i=0;i<Num;i++)
       {
       cout<<nome[i]<<endl;
       cout<< ender[i]<<endl;
       cout<<cod[i]<<endl;
       cout<<emiss[i]<<endl;
       cout<<venci[i]<<endl;
       }



}

