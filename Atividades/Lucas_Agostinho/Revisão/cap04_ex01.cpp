/**********************************************************
- Autor:     Lucas Agostinho de Sousa
- Descrição: Média de nota e sistema de aprovação
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
    float nota = 0;
    float soma = 0;
    float media = 0;
    int i = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa
    for (i = 0; i < 4; i++)
    {
        cout << "Insira as notas do aluno: ";
        cin >> nota;

        soma += nota;
    }

    media = soma / 4;

    cout << "\nMédia do aluno: " << media << endl;

    cout << endl;
    if (media >= 7)
    {
        cout << "Aluno aprovado!";
    }
    else
    {
        cout << "Aluno reprovado!";
    }
    cout << endl;

    return 0;
}

