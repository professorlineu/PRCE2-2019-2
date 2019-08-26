/******************************
Auto: felipe alexandre da silva
atividade 4 capitulo 5
******************************/
#include<iostream>
#include<locale>
#include<cstdlib>

int main()
{
    using namespace std;
    setlocale(LC_ALL,"");
    int Num=0;
    int i=0;
    int res=0;
    cout<<"digite o numero a se calcular: ";
    cin>>Num;
    for(i=0; i<11;i++)
    {
       res=Num*i;
       cout<<Num<<" x "<<i<<"="<<res<<endl;

    }

}
