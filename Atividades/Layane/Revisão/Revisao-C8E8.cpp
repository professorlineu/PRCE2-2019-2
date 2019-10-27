/**********************************************************
- Autor:    Layane Quissak
- Descrição: Cap 8 - Ex 8
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

   cout << "O fatorial desse número é " << iCalculo;
}


int main()
{

    int valor;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite um número inteiro e positivo: ";
    cin >> valor;

    fatorial(valor);

}
