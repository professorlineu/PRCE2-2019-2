/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descrição: Lista 4 - Exercício 17
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis

    int senha;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite a senha: ";
    cin >> senha;

    if(senha == 4531)
    {
        cout << "Senha Correta" << endl;
        cout << "Permissão Concedida";
    }
    else
    {
        cout << "Senha Incorreta" << endl;
        cout << "Permissão Negada";
    }


    return 1;
}
