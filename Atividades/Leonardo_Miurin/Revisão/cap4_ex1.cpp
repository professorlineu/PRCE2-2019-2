/**********************************************************
- Autor:     Leonardo Miurin
- Descrição: cap. 4/exercício 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

float fNota1, fNota2, fNota3, fNota4;
float fMedia;

int main()
{
    setlocale(LC_ALL,"");

    cout << "Nota: " << endl;
    cin >> fNota1;

    cout << "Nota: " << endl;
    cin >> fNota2;

    cout << "Nota: " << endl;
    cin >> fNota3;

    cout << "Nota: " << endl;
    cin >> fNota4;

    fMedia = (fNota1 + fNota2 + fNota3 + fNota4)/4;

    if(fMedia>=7){
            cout << "Média final: " << fMedia << ". Aprovado" <<endl;

    } else {
            cout << "Média final: " << fMedia << ". Reprovado" <<endl;

    }


    return 0;
}
