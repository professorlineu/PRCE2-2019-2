/******************************
Auto: felipe alexandre da silva
atividade 5 capitulo 9
******************************/
#include<iostream>
#include<stdio.h>
#include<cstdlib>
int main()
{
    setlocale(LC_ALL,"");
    using namespace std;
    char cadeia1[5];
    char cadeia2[5];
    int p=0;
    int Num=0;
    int cont=0;
    int j=0;
    for(p=0;p<5;p++)
    {
    cout<<"Digite a primeira cadeia de 5 caracteres: ";
    cin>>cadeia1[p];
    }
    for(p=0;p<5;p++)
    {
    cout<<"Digite a segunda cadeia de 5 caracteres: ";
    cin>>cadeia2[p];
    }
    for(p=0;p<5;p++)
    {
       for(j=0;j<5;j++)
       {
           if(cadeia1[p]==cadeia2[j])
           {
               cont++;
           }

       }
    }
 if(cont>=5)
 {
    cout<<"As cadeias são permutações uma da outra\n";
 }
 else
 {
     cout<<"As cadeias não são permutações uma da outra\n";
 }

}
