// Thiago Vieira Marcondes - 170379x
// Exercicio 4 - Ex1_Cap6

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main (){

    setlocale(LC_ALL,"");

    //Declarandos as variáveis.

    int Vetor[5];
    int Soma=0;

    //Pedidos e respostas do programa para o usuário.

    cout << "Digite o primeiro número: ";
    cin >> Vetor[0];

    cout << "\nDigite o segundo número: ";
    cin >> Vetor[1];

    cout << "\nDigite o terceiro número: ";
    cin >> Vetor[2];

    cout << "\nDigite o quarto número: ";
    cin >> Vetor[3];

    cout << "\nDigite o quinto número: ";
    cin >> Vetor[4];

    cout << "\n\nA soma dos numeros acima inseridos é de: " << endl;

    // Laço para fazer a operação de soma utilizando os números do vetor.
        for( int i=0; i<=4 ; i++ )
            {
            if( i<4 )
                {
                cout << Vetor[i] << " + ";
                }

            else
                {
                cout << Vetor[i];
                }

            Soma = Vetor[i] + Soma;
            }

    cout << " = " << Soma << endl;

}
