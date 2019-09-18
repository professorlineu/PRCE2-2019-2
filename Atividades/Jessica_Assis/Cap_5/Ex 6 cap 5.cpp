/**********************************************************
- Autor:     Jéssica Assis
- Descrição: Revisão - Estrutura de Repetição EX 6 CAP 5
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    char iOp=0;
    int iTr=0;


    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    cout << "Olá seja bem vindo ao nosso sistema\n";

  do
    {

    cout << "Escolha qual Transação irá realizar\n V- À vista\n P - À prazo";
    cin >> iTr;

    switch (iTr)
    {
    case 'V':
    case 'v':
        iOp++;
        break;

    case 'P':
    case 'p':
        iOp++;
        break;

    default:
        cout << "Inválido";
        break;
    }

    }
while (iTr <= 15);
    return 0;
}
