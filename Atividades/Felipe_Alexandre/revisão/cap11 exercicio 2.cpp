/**********************************************************
- Autor:     Felipe Alexandre
 cap 11 atividade 1
 Descrição:utilização de arquivo
**********************************************************/

#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<string.h>
#include<fstream>
int main()
{
   using namespace std;
    setlocale(LC_ALL,"");
    int Num=0;
    int Num2=0;
    int cod[4];
    char choi='0';
    ofstream arq1;
    string nome[4];
    string ender[4];
    string emiss[4];
    string venci[4];
   cout<<"Programa de cadastro de clientes\nQuantos clientes a cadastrar?\n(capacidade maxima de 4 cadastros) ";
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
       //ios::app
arq1.open("registros.txt");
for(int i=0;i<Num;i++)
{
   arq1<<"Nome do cliente: "<<nome[i]<<endl;
   arq1<<"Endereço do cliente "<<ender[i]<<endl;
   arq1<<"Código do cliente: "<<cod[i]<<endl;
   arq1<<"Data da emissão: "<<emiss[i]<<endl;
   arq1<<"Vencimento do cliente:"<<venci[i]<<endl;

}
arq1.close();



}
