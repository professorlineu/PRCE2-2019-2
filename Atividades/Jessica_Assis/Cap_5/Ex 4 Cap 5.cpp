/**********************************************************
- Autor:     Jéssica Assis
- Descrição: Revisão - Estrutura de Repetição EX 4 CAP 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int iCont = 0, iNum = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Digite o valor desejado: ";
    cin >> iNum;

    while (iCont <= 10)
    {

        cout << iCont*iNum << endl ;
        iCont++;
    }

    return 0;
}
