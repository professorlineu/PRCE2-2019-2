/**********************************************************
- Autor:     Felipe Diogo
- Descrição: Laço de Repetição
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int ivalor = 0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe um valor " << endl;
    cin >> ivalor;

    if ( ivalor % 2 == 0 )
     {

      cout << "\nnúmero par"  << endl ;

     }
     else
     {

      cout << "\nnúmero ímpar"  << endl ;

     }



    return 0;
}
