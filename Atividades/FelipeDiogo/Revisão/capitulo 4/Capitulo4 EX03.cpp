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
    double dvalor1 = 0;
    double dvalor2 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o valor 1 " << endl;
    cin >> dvalor1;

    cout << "Informe o valor 2 " << endl;
    cin >> dvalor2;



    if (dvalor1 > dvalor2)
{
    cout << "\n" << "valor 1 maior que o valor 2 "<< endl;
}
    if (dvalor1 < dvalor2)
{
    cout << "\n" << "valor 2 maior que o valor 1 "<< endl;
}
    if (dvalor1 == dvalor2)
{
    cout << "\n" << "valores iguais"<< endl;
}



    return 0;
}
