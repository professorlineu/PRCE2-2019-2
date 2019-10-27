/**********************************************************
- Autor:     Layane Quissak
- Descrição: Lista 4 - Ex 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    float n1, n2, n3, n4;
    float media;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout<<"Digite as notas"<<endl;
    cin>>n1>>n2>>n3>>n4;

    media = media + (n1+n2+n3+n4)/4;

    cout<<"Média aritmética: "<<media<<endl;
    if (media < 7)
    {
        cout<<"Reprovado.";
    }
    else
    {
        cout<<"Aprovado.";
    }

    return 0;
}
