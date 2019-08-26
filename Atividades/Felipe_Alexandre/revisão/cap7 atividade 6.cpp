/******************************
Auto: felipe alexandre da silva
atividade 6 capitulo 7
******************************/
#include<iostream>
#include<stdio.h>
#include<cstdlib>


int main()
{
    setlocale(LC_ALL,"");
    using namespace std;

    int Matriz[20][10];
    int val=1;
    int i=0;
    int j=0;
    int Soma=0;
    int Col=0;
    int vSoma[10];
    for(i=0;i<20;i++)
    {
        for(j=0;j<10;j++)
        {
            Matriz[i][j]=val;
        }

    }

    for(i=0;i<20;i++)
    {
        for(j=0;j<10;j++)
        {
            if(j<9)
            {
               cout<<Matriz[i][j]<<"\t";
            }
            if(j==9)
            {
                cout<<Matriz[i][j]<<endl;
            }
        }

    }

    for(j=0;j<10;j++)
    {
       Soma=0;
         for(i=0;i<20;i++)
        {
            Soma=Soma+Matriz[i][j];
            vSoma[j]=Soma;
        }
    }
   cout<<vSoma[0]<<" - soma da primeira e demais colunas, já que a matriz tem é feita de apenas um número."<<endl;
   cout<<"\n\n";
   printf("Matriz com os valores multiplicados com a soma de uma coluna\n");
   for(i=0;i<20;i++)
    {
        for(j=0;j<10;j++)
        {
            if(j<9)
            {
               cout<<Matriz[i][j]*vSoma[0]<<"\t";
            }
            if(j==9)
            {
                cout<<Matriz[i][j]*vSoma[0]<<endl;
            }
        }

    }


   }
