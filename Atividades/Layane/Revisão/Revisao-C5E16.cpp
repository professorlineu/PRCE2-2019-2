/**********************************************************
- Autor:     Layane Quissak
- Descrição: Lista 5 Ex 16
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{

    int iIdade;
    int iSoma = 0;
    int n = 0;
    float fMedia;


    setlocale(LC_ALL,"");
    system("color F1");

    do
    {

        cout << "Digite a idade: " << endl;
        cin >> iIdade;
        n++;
        iSoma = iSoma + iIdade;

    }
    while(iIdade!=0);

    fMedia = (iSoma)/(n-1);
    cout << "Quantidade de idades digitadas: " << n-1 <<endl;
    cout<< "Soma das idades digitadas: " << iSoma << endl;
    cout<<"Média das idades: " << fMedia << endl;


    return 0;
}
