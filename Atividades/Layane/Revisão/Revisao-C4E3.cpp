/**********************************************************
- Autor:     Layane Quissak
- Descri��o: Lista 4 - Ex 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float a, b;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    cout<<"Informe dois valores: "<<endl;
    cin>> a>>b;

    if (a > b)
    {
    cout<<a<<" � o maior valor"<<endl;
    }
    if (a < b)
    {
    cout<<b<<" � o maior valor"<<endl;
    }
    if (a == b)
    {
    cout << "Os valores s�o iguais"<<endl;
    }






    return 0;
}
