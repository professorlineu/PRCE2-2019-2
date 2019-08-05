/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descrição: Reajuste Salarial
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    double dSalario = 0;
    double dReajuste = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "REAJUSTE SALARIAL" << endl << endl;

    cout << "Informe o valor do seu salário: R$ ";
    cin >> dSalario;

    if (dSalario <= 300)
    {
        dReajuste = dSalario + (0.35 * dSalario);

        cout << "\nO seu salário será de: R$ " << dReajuste << endl;
    }

    else
    {
        dReajuste = dSalario + (0.15 * dSalario);

        cout << "\nO seu salário será de: R$ " << dReajuste << endl;
    }

    return 0;
}
