/**********************************************************
- Autor:     Silas Barboza Rohde
- Descrição: Exercício 8 - Cap. 04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

// protóripo da função
float fSalario =0;


int main()
{
    setlocale(LC_ALL,"");
    system("color F1");


cout << "Informe seu salário: ";
cin >> fSalario;

if (fSalario > 300)
{
    cout << "\nVocê terá um almento de 15% e seu novo salário será de: R$" << fSalario+((fSalario*15)/100) << endl;
}
else
{
    cout << "\nVocê terá um almento de 35% e seu novo salário será de: R$" << fSalario+((fSalario*35)/100) << endl;
}

return 0;

}


