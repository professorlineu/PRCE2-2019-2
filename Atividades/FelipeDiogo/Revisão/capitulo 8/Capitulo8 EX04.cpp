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
    double dvolume = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o valor do raio da esfera " << endl;
    cin >> ivalor;

    dvolume =(4 / 3) * (ivalor) * (ivalor) * (ivalor) ;


    cout << "o volume da esfera é " << dvolume << endl ;




    return 0;
}
