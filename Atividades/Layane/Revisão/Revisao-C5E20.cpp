/**********************************************************
- Autor:     Layane Quissak
- Descri��o: Lista 5 - Ex 20
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
        cout<<"Menu de op��es: "<<endl<<" 1 - M�dia aritm�tica\n 2 - M�dia ponderada\n 3 - Sair"<<endl;
        cout<<"Digite a op��o desejada: ";
        cin>> iOpt;

        switch(iOpt)
        {
        case 1:
            cout<<"Informe duas notas: ";
            cin>> fNota1 >> fNota2;

            cout<<"A m�dia das notas �: "<< (fNota1+fNota2)/2<<endl;
            break;
        case 2:
            cout<<"Informe tr�s notas: ";
            cin>> fNota1 >> fNota2 >> fNota3;

            cout<<"informe o peso de cada nota respectivamente: ";
            cin >> fPeso1 >> fPeso2 >> fPeso3;

            cout<<"A m�dia ponderada �: "<<(fNota1*fPeso1)+(fNota2*fPeso2)+(fNota3*fPeso3)<<endl;
            break;
        case 3:
            cout<<"Programa finalizado."<<endl;
            break;
        default:
            cout<<"Op��o inv�lida."<<endl;
            break;
        }

    }
    while (iOpt!=3);

    return 0;
}
