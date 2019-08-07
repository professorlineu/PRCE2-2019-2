/**********************************************************
- Autor:     Rebeca Lorhuama de Castro Saraiva
- Descrição: Média de Números Positivos
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;


    //Declaração de Variáveis
    float fNum = 0;
    float fTotal = 0;
    float fCont = 0;
    void Media();


int main()
{
    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "MÉDIA DE NÚMEROS POSITIVOS" << endl << endl;
    cout << "Para finalizar o programa, basta digitar 0" << endl << endl;

    do
    {
        cout << "Informe um número: ";
        cin >> fNum;

        Media();
    }

    while (fNum > 0);

    cout << "\nA média das idades é:" << fTotal /fCont << endl;

    return 0;
}

void Media ()
{
    if (fNum > 0)
    {
        fTotal = fTotal + fNum;
        fCont = fCont + 1;
    }

    else
    {
        cout << "\nFinalizado." << endl;
    }

    return;
}
