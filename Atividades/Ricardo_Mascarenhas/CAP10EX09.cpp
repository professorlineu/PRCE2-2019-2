/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descrição: Salário
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;



struct Salario {
float iSalF = 0 ;
float iVenda = 0 ;
};



int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    Salario i;

    cout << "Informe o seu salário: R$ ";
    cin >> i.iSalF ;

    cout << "\n" ;

    cout << "Informe o valor de suas vendas: R$ " ;
    cin >> i.iVenda ;

    cout << "\n" ;

    cout << "Você receberá de comissão: R$ " << (i.iVenda*6)/100 ;

    cout << endl ;

    cout << "Seu salário final será de: R$ " << ((i.iVenda*6)/100) + i.iSalF ;


    return 0;
}
