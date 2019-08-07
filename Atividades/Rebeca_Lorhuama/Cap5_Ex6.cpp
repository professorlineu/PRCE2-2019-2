/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descrição: Compras e Transações
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    char cCod;
    int iCont = 1;
    int iParcela = 0;
    float fValor = 0;
    float fPagVis = 0;
    float fPagPra = 0;
    float fPagTotal = 0;
    float fTransacao = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "TRANSAÇÕES" << endl << endl;

    cout << "Informe a quantidade de compras: ";
    cin >> fTransacao;

    cout << "\nConsidere: 'V = Compra à vista' e 'P = Compra à prazo'" << endl;

    while (iCont <= fTransacao)
    {
        iCont;

        cout << "\nA compra foi à prazo ou à vista?";
        cin >> cCod;

        cout << "Informe o valor da compra: R$ ";
        cin >> fValor;

        if (fValor < 0)
        {
            cout << "Valor inválido. Repita o processo" << endl;
        }

        else if(cCod == 'V'|| cCod == 'v')
        {
            fPagVis += fValor;
            fPagTotal += fValor;

            iCont++;
        }

        else if(cCod == 'P'|| cCod == 'p')
        {
            fPagPra += fValor;
            fPagTotal += fValor;

            iCont++;
        }

        else
        {
            cout << "Código inválido. Repita o processo." << endl;
        }

    }

    if(fPagPra > 0)
    {
        cout << "\nInforme o número de parcelas a pagar: ";
        cin >> iParcela;
    }

    cout << "\nO valor total das compras é: R$ " << fPagTotal;

    cout << "\nO total das compras à vista é: R$ " << fPagVis;

    if(fPagPra > 0)
    {
        cout << "\nO total das compras à prazo é: R$ " << fPagPra << endl;
        cout << "\nO valor da primeira prestação é: R$ " << fPagPra/iParcela << endl;

    }

return 0;
}
