/**********************************************************
- Autor:     Layane Quissak
- Descri��o: Cap 8 - Ex 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int valor(int iValor)
{
    if (iValor>0)
    {
        cout << "O n�mero � positivo" << endl;
    }
    if (iValor<0)
    {
        cout << "O n�mero � negativo" << endl;
    }
    if (iValor == 0)
    {
        cout << "O n�mero � nulo" << endl;
    }
}
int main()
{
    int iValor1;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite um n�mero inteiro: ";
    cin >> iValor1;

    valor(iValor1);

}
