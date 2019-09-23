/**********************************************************
- Autor:     Silas Barboza Rohde
- Descrição: Exercício 16 - Cap. 04
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

// protóripo da função
float fPreco = 0;
float fCodProd = 0;


int main()
{
    setlocale(LC_ALL,"");
    system("color F1");


cout << "Informe o código do produto: ";
cin >> fCodProd;
cout << "Informe o preço do produto: ";
cin >> fPreco;


if (fPreco < 30 && fPreco > 0)
{
    cout << "\nProduto fora da promoção. Sem desconto!" << endl;
}
else if (fPreco > 30 && fPreco < 100)
{
    cout << "\nVocê terá 10% de desconto, o novo valor será de R$" << fPreco-((fPreco*10)/100) << endl;
}
else if (fPreco > 100)
{
    cout << "\nVocê terá 15% de desconto, o novo valor será de R$" << fPreco-((fPreco*10)/100) << endl;
}
else
{
    cout << "\nNúmero inválido!" << endl;
}


return 0;

}


