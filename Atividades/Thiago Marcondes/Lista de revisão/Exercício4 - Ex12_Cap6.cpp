// Thiago Vieira Marcondes - 170379x
// Exercicio 4 - Ex1_Cap6

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main (){

    setlocale(LC_ALL,"");

    //Declarandos as vari�veis.

    int Vetor[5];
    int Soma=0;

    //Pedidos e respostas do programa para o usu�rio.

    cout << "Digite o primeiro n�mero: ";
    cin >> Vetor[0];

    cout << "\nDigite o segundo n�mero: ";
    cin >> Vetor[1];

    cout << "\nDigite o terceiro n�mero: ";
    cin >> Vetor[2];

    cout << "\nDigite o quarto n�mero: ";
    cin >> Vetor[3];

    cout << "\nDigite o quinto n�mero: ";
    cin >> Vetor[4];

    cout << "\n\nA soma dos numeros acima inseridos � de: " << endl;

    // La�o para fazer a opera��o de soma utilizando os n�meros do vetor.
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
