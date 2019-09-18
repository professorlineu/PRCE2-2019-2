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
    int ihora = 0;
    int iminuto = 0;
    int isegundo = 0;
    int ivalor = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Informe o valor das horas " << endl;
    cin >> ihora;

    cout << "Informe o valor dos minutos " << endl;
    cin >> iminuto;

    cout << "Informe o valor dos segundos " << endl;
    cin >> isegundo;

    ivalor =(ihora * 3600) + (iminuto * 60) + (isegundo * 1) ;


    cout << "\n" << ihora << "h " << iminuto << "min " << isegundo << "s correspondem a " << ivalor << " segundos" << endl;




    return 0;
}
