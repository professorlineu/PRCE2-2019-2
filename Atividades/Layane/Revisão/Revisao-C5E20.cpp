/**********************************************************
- Autor:     Layane Quissak
- Descrição: Lista 5 - Ex 20
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int iOpt=0;
    float fNota1=0, fNota2=0, fNota3=0,fPeso1=0, fPeso2=0, fPeso3=0 ;

    setlocale(LC_ALL,"");
    system("color F1");
    do
    {
        cout<<"Menu de opções: "<<endl<<" 1 - Média aritmética\n 2 - Média ponderada\n 3 - Sair"<<endl;
        cout<<"Digite a opção desejada: ";
        cin>> iOpt;

        switch(iOpt)
        {
        case 1:
            cout<<"Informe duas notas: ";
            cin>> fNota1 >> fNota2;

            cout<<"A média das notas é: "<< (fNota1+fNota2)/2<<endl;
            break;
        case 2:
            cout<<"Informe três notas: ";
            cin>> fNota1 >> fNota2 >> fNota3;

            cout<<"informe o peso de cada nota respectivamente: ";
            cin >> fPeso1 >> fPeso2 >> fPeso3;

            cout<<"A média ponderada é: "<<(fNota1*fPeso1)+(fNota2*fPeso2)+(fNota3*fPeso3)<<endl;
            break;
        case 3:
            cout<<"Programa finalizado."<<endl;
            break;
        default:
            cout<<"Opção inválida."<<endl;
            break;
        }

    }
    while (iOpt!=3);

    return 0;
}
