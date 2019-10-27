/**********************************************************
- Autor:     Layane Quissak
- Descrição: Cap 10 Ex 9
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;


struct Salario
{
    float iSalF = 0 ;
    float iVenda = 0 ;
};


int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    Salario i;

    cout << "Informe o seu salário: R$ "<<endl;
    cin >> i.iSalF ;
    cout << "Informe o valor de suas vendas: R$ " <<endl;
    cin >> i.iVenda ;
    cout << "Você receberá de comissăo: R$ " << (i.iVenda*6)/100<<endl ;
    cout << "Seu salário final será de: R$ " << ((i.iVenda*6)/100) + i.iSalF ;
}
