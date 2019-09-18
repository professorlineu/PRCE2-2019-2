
/**********************************************************
- Autor:     Leonardo Miurin
- Descrição: cap. 4/exercício 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

float fNum1, fNum2;

int main()
{
    setlocale(LC_ALL,"");

    cout << "Digite o primeiro número: " << endl;
    cin >> fNum1;

    cout << "Digite o segundo número: " << endl;
    cin >> fNum2;

    if(fNum1>fNum2){
        cout << "Menor: " << fNum2 << endl;
    } else if (fNum1<fNum2){
        cout << "Menor: " << fNum1 << endl;
    } else {
        cout << "Números iguais" << endl;
    }

    return 0;
}
