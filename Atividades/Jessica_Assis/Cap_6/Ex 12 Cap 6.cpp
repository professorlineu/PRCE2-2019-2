/**********************************************************
- Autor:     Jéssica Assis
- Descrição: Revisão - Vetor EX 12 CAP 6
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    int Vetor[5], iSoma = 0, i = 0;



    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Forneça 5 números" << endl;


    for (i = 0; i < 5 ; i++ )
    {
    cout << "Digite o " << i + 1 << "º Número: ";
    cin >> Vetor [i];

    iSoma = Vetor[i] + iSoma;
    }

    cout << "A soma dos números digitados é " << iSoma << endl;

}
