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
    double dvalor3 = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o valor 1 " << endl;
    cin >> dvalor1;

    cout << "Informe o valor 2 " << endl;
    cin >> dvalor2;

    cout << "Informe o valor 3 " << endl;
    cin >> dvalor3;



    if (dvalor1 > dvalor2 && dvalor1 > dvalor3)
{
    cout << "\n" << "o maior é o valor 1 "<< endl;
}
    if (dvalor2 > dvalor1 && dvalor2 > dvalor3)
{
    cout << "\n" << "o maior é o valor 2 "<< endl;
}
    if (dvalor3 > dvalor2 && dvalor3 > dvalor1)
{
    cout << "\n" << "o maior é o valor 3"<< endl;
}
    else
{
    cout << "\n" << "não existe apenas um valor maior que os outros"<< endl;
}


    return 0;
}
