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
    int ivalor1 = 0;
    int i = 0;
    int x = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o valor para que seja gerada a tabuada dele " << endl;
    cin >> ivalor1;


while (i != 11)
{

    x = (i * ivalor1);

    cout << "\n" << ivalor1 << "x" << i << "=" <<  x << endl;

    i++;
}



    return 0;
}
