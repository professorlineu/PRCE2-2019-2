/**********************************************************
- Autor:     Layane Quissak
- Descrição: Cap 8 - Ex 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int valor(int iValor)
{
    if (iValor>0)
    {
        cout << "O número é positivo" << endl;
    }
    if (iValor<0)
    {
        cout << "O número é negativo" << endl;
    }
    if (iValor == 0)
    {
        cout << "O número é nulo" << endl;
    }
}
int main()
{
    int iValor1;

    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite um número inteiro: ";
    cin >> iValor1;

    valor(iValor1);

}
