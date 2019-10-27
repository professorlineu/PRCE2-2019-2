/**********************************************************
- Autor:     Layane Quissak
- Descrição: Cap 8 - Ex 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

float Volume (float R);
int main()
{
    using namespace std;
    float R = 0;
    setlocale(LC_ALL,"");
    system("color F1");
    cout<<"Digite o raio da esfera: ";
    cin>>R;
    cout<<"O volume da esfera é: "<<Volume(R)<<"cm³"<<endl;
}
float Volume (float raio)
{
    float vol=0;
    vol=(raio*raio*raio*4)/3;
    return vol;
}
