
/**********************************************************
- Autor:     Leonardo Miurin
- Descrição: cap. 4/exercício 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int iIdade;
int iSoma = 0;
int iN = 0;
float fMedia;

int main()
{
    setlocale(LC_ALL,"");

    do{

        cout << "Idade: " << endl;
        cin >> iIdade;
        iN++;
        iSoma = iSoma + iIdade;

    } while(iIdade!=0);

    fMedia = (iSoma)/(iN-1);
    cout << "Quantidade de idades digitadas = " << iN-1 << "\nSoma das idades digitadas = " << iSoma << "\nMedia das idades = " << fMedia << endl;

    return 0;
}
