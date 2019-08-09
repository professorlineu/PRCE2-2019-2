/**********************************************************
- Autor:     Ricardo Mascarenhas
- Descrição: Crediário
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iVend = 0;
    char cVenda = 0;
    int i = 0;
    int ii = 0;
    float fValor = 0;
    float fValor1 = 0;
    float fTotal = 0;
    float fTotal1 = 0;
    float fT = 0;
    float fTP = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa


    cout << "VENDAS" << endl ;

    cout << endl ;

    cout << "Informe o número de vendas realizadas na loja: " << endl ;
    cin >> iVend ;

    for (int iii = 0; iii < iVend ; iii++)
    {
        cout << "Venda a Prazo (P) ou à Vista (V) ? " << endl ;
        cin >> cVenda ;

        if (cVenda == 'P')
        {
            i++ ;

            cout << "Informe o Valor da compra a prazo: " << endl;
            cin >> fValor ;

            fTotal = fValor + fTotal ;

            fTP = fTotal / 3;


        }
        else // Caso V
        {

            ii++;

            cout << "Informe o Valor da compra a vista: " << endl;
            cin >> fValor1 ;

             fTotal1 = fValor1 + fTotal1 ;

        }
    }

            fT = fTotal1 + fTotal;

            cout << "VENDAS " << endl ;

            cout << "Valor total das vendas: R$ " << fT << endl ;

             cout << endl;

            cout << "Valor total de vendas à prazo: R$ " << fTotal << endl ;

            cout << endl ;

             cout << "Valor total de vendas à vista: R$ " << fTotal1 << endl ;

             cout << endl ;

             cout << "Valor da primeira prestação das vendas à prazo: R$ " << fTP << endl ;






    return 0;
}
