/**********************************************************
- Autor:     Layane Quissak
- Descrição: Lista 4 - Ex 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float a, b;
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout<<"Informe dois valores: "<<endl;
    cin>> a>>b;

    if (a > b)
    {
    cout<<a<<" é o maior valor"<<endl;
    }
    if (a < b)
    {
    cout<<b<<" é o maior valor"<<endl;
    }
    if (a == b)
    {
    cout << "Os valores são iguais"<<endl;
    }






    return 0;
}
