/**********************************************************
- Autor:    Layane Quissak
- Descri��o: Cap 8 - Ex 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int fatorial(int iCalculo)
{
   int iCont=1;
   int iFatorial=0;

   int iCalculo2 = iCalculo;

    while(iCont<iCalculo2)
    {
        iCalculo = iCont*iCalculo;
        iCont++;
    }

   cout << "O fatorial desse n�mero � " << iCalculo;
}


int main()
{

    int valor;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite um n�mero inteiro e positivo: ";
    cin >> valor;

    fatorial(valor);

}
