
/**********************************************************
- Autor:     Leonardo Miurin
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int iTab, iMult;

int main()
{
    setlocale(LC_ALL,"");

    cout << "Informe o número no qual deseja saber a tabuada: ";
    cin >> iTab;

    for(iMult=0; iMult<=10; iMult++){
        cout << "\t" << iTab << "x" << iMult << "=" << iTab*iMult << "" << endl;
    }

    return 0;
}
