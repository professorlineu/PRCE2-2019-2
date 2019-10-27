/**********************************************************
- Autor:     Layane Quissak
- Descrição: Lista 5 Ex 4
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int iTab=0;
    int iMult=0;

    setlocale(LC_ALL,"");
    system("color F1");
    cout << "Informe o número para ver sua tabuada: ";
    cin >> iTab;

    for(iMult=0; iMult<=10; iMult++)
    {
        cout << "\t" << iTab << "x" << iMult << "=" << iTab*iMult << "" << endl;
    }



    return 0;
}
