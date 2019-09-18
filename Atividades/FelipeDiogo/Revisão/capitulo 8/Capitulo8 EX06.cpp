/**********************************************************
- Autor:     Felipe Diogo e Letiele
- Descrição: DO WHILE
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    double ialt = 0;
    char csexo ;
    double x = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

        cout << "Digite sua altura" << endl;
        cin >> ialt;

        cout << "Digite M para o sexo masculino e F para feminino " << endl;
        cin >> csexo ;

        if (csexo == 'M' || csexo == 'm')
        {
         x = (72.7 * (ialt) )- 58;
        }
        else
        {
          x = (62.1 *(ialt)) - 44.7;
        }

        cout << "\nSeu peso ideal é " << x << endl;




    return 0;
}
