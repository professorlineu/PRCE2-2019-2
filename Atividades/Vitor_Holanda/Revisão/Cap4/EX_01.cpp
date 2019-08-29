Autor:     Vitor de Oliveira Holanda
- Descrição: Cap.4 - Exercício 1

Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

float n1, n2, n3, n4;
float media;

int main()
{
    setlocale(LC_ALL,"");

    cout << "Nota1: " << endl;
    cin >> n1;

    cout << "Nota2: " << endl;
    cin >> n2;

    cout << "Nota3: " << endl;
    cin >> n3;

    cout << "Nota4: " << endl;
    cin >> n4;

    media = (n1 + n2 + n3 + n4)/4;

    if(media>=7){
            cout << "Média final: " << media << ". Aprovado" <<endl;

    } else {
            cout << "Média final: " << media << ". Reprovado" <<endl;

    }


    return 0;
}

