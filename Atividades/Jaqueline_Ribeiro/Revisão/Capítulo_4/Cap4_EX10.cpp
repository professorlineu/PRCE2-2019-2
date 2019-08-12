/**********************************************************
- Autor:     Jaqueline Silva Ribeiro
- Descrição: Cap. 4 - Exercicio 10
    O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica.
    As porcentagens encontram-se na tabela a seguir.
    Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.

                                        % do distribuidor       % dos impostos
        Até R$ 12000,00                         5                   isento
        Entre R$12000,00 e R$25000,00           10                    15
        Acima de 25000,00                       15                    20
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float fCusto = 0 ;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    cout << "Informe o Custo de Fábrica do carro:" ;
    cin >> fCusto;

    if(fCusto<=12000)
    {
        cout<<"Preço ao Consumidor: " << fCusto*1.05 <<endl;
    }
    else if (fCusto<=25000)
    {
        cout<<"Preço ao Consumidor: " << fCusto*1.25 <<endl;
    }
    else if( fCusto>25000)
    {
        cout<<"Preço ao Consumidor: " << fCusto*1.35 <<endl;
    }

    return 0;
}
