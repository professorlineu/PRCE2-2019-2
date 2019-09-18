/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Cálculo comissão
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

struct funcionario
{
    float fSalario = 0;
    float fValorTotalVendas = 0;
    float fComissao = 0;
    float fSalarioFinal = 0;
};

int main()
{
    ///Declaração de variáveis
    funcionario jorge;

    ///Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    ///Código do programa
    cout << "Insira o valor do salário: ";
    cin >>jorge.fSalario;

    cout << "Insira o valor do total de vendas: ";
    cin >>jorge.fValorTotalVendas;

    jorge.fComissao = jorge.fValorTotalVendas * 0.06;

    jorge.fSalarioFinal = jorge.fSalario + jorge.fComissao;

    cout << "\nSua comissão é de " << jorge.fComissao << " reais";
    cout << "\nSeu salário final é de " << jorge.fSalarioFinal << " reais\n";

    return 0;
}
