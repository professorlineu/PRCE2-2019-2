/**********************************************************
- Autor:     Fabio Augusto Nikaido
- Descrição: Lista 10 - Exercício 9
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string.h>

using namespace std;

struct calculo
{
    int salario;
    int vendas;
};


int main()
{

    //Declaração de variáveis

    calculo teste;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << "Digite o seu salário: ";
    cin >> teste.salario;

    cout << "Digite o valor total de suas vendas: ";
    cin >> teste.vendas;

    cout << "Salário Fixo: " << teste.salario << endl;
    cout << "Valor das vendas: " << teste.vendas << endl;
    cout << "Comissão: " << teste.salario+(teste.vendas*0.06) << endl;

    return 1;
}

