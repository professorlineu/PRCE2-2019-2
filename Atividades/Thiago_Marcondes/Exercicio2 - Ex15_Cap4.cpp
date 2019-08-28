// Thiago Vieira Marcondes - 170379x
// Exercicio 2 - Ex15_Cap4

#include <iostream>
#include <math.h>

using namespace std;

int main () {

    float poupanca, fundosrf, valor;
    int servico;

    cout << "- Insira o tipo de investimento e seu valor:\n    a) Digite 1 para POUPANCA.\n    b) Digite 2 para FUNDOS DE RENDA FIXA.\n\n- Em seguida insira o valor em reais do investimento.\n";
    cin >> servico;
    cin >> valor;

    poupanca = 1.03 * valor;
    fundosrf = 1.04 * valor;

    switch (servico) {
        case 1:
        cout << "\nO valor optido apos um mes de investimento na POUPANCA e de: R$" << poupanca;
        break;

        case 2:
        cout << "\nO valor optido apos um mes de investimento nos FUNDOS DE RENDA FIXA e de: R$" << fundosrf;
        break;

        default:
            cout << "\nA opcao de investimento inserida e INVALIDA";
                    }


    return 0;
}
