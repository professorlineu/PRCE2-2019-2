/**********************************************************
- Autor:    Layane Quissak
- Descrição: Cap 8 - Ex 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int media(int valor, int iContador)
{
    cout << "A média aritmética entre os valores é: " << valor/(iContador-1) << endl;
}


int main()
{

    int iCont=0;
    int iNum;
    int iSoma=0;

    setlocale(LC_ALL,"");
    system("color F1");

    while(iNum != 0)
    {
        cout << "Digite um número positivo: ";
        cin >> iNum;

        iSoma = iSoma + iNum;
        iCont++;
    }

    media(iSoma,iCont);

}
